/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:29:10 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/24 20:21:31 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) : _map() {}

BitcoinExchange::BitcoinExchange(std::string infile) : _map() {
	this->makeDb(infile);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange &src) {
	src._map = this->_map;
	src = *this;
}

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange &rhs) {
	this->_map = rhs._map;
	return (*this);
}

static float convFloat(std::string s) {
	double dd = std::strtod(s.c_str(), NULL);
	return (static_cast<float>(dd));
}

void	BitcoinExchange::makeDb(std::string infile) {
	if (this->_map.size())
		throw MapNotEmptyException();

	std::ifstream	db(infile.c_str());
	std::string		tmp;
	
	if (db.fail()) {
		db.close();
		throw InvalidDBFileException();
	}
	getline(db, tmp);
	if (tmp.compare("date,exchange_rate")) {
		db.close();
		throw InvalidDBFileException();
	}

	std::string		key;
	float			value;

	while (getline(db, tmp))
	{
		key = tmp.substr(0, 10);
		value = convFloat(tmp.substr(12));
		// std::cout << key << " " << value << std::endl;
		this->_map.insert(std::pair<std::string, float>(key, value));
	}
}

int str2int(char const *s)
{
    char *end = NULL;
    long  l;
	
    errno = 0;
	if (s[0] == '0')
		s++;
    l = strtol(s, &end, 0);
    if ((errno == ERANGE && l == std::numeric_limits<long int>::max())
			|| l > std::numeric_limits<int>::max()) {
		std::cerr << "Error: too large a number." << std::endl;
        throw std::exception();
	}
    if ((errno == ERANGE && l == std::numeric_limits<long int>::min())
			|| l < std::numeric_limits<int>::min()) {
		std::cerr << "Error: not a positive number." << std::endl;
		throw std::exception();
	}
    if (*s == '\0' || *end != '\0')
        throw BitcoinExchange::BadInputException();
    return (static_cast<int>(l));
}

// 2011-01-03 => 3 = 0.9
// 2011-01-03 => 2 = 0.6
// 2011-01-03 => 1 = 0.3
// 2011-01-03 => 1.2 = 0.36
// 2011-01-09 => 1 = 0.32
// Error: not a positive number.
// Error: bad input => 2001-42-42
// 2012-01-11 => 1 = 7.1
// Error: too large a number.

void	checkYear(int year) {
	if (year < 2009)
		throw BitcoinExchange::BadInputException();
}

void	checkMonth(int month) {
	if (month < 1 || month > 12)
		throw BitcoinExchange::BadInputException();
}

void	checkDay(int day, int month, int year) {
	if (month == 2) {
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
			if (day < 1 || day > 29)
				throw BitcoinExchange::BadInputException();
		}
		else if (day < 1 || day > 28)
			throw BitcoinExchange::BadInputException();
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day < 1 || day > 30)
			throw BitcoinExchange::BadInputException();
	}
	else if (day < 1 || day > 31)
		throw BitcoinExchange::BadInputException();
}


void	BitcoinExchange::getValue(std::string line) const {
	std::string		date = line.substr(0, 10);
	
	try {
		int	year = str2int(date.substr(0, 4).c_str());
		checkYear(year);
		
		int	month = str2int(date.substr(5, 2).c_str());
		checkMonth(month);
		
		int	day = str2int(date.substr(8, 2).c_str());
		checkDay(day, month, year);
	}
	catch (BitcoinExchange::BadInputException &e) {
		std::cerr << e.what() << date << std::endl;
		return ;
	}
	catch (std::exception &e) {
		return ;
	}

	try {
		float	btcvalue = convFloat(line.substr(12));
		
		if (btcvalue < 0)
			throw BitcoinExchange::BadInputException();
		else if (btcvalue > 1000)
			throw std::exception();
	}
	catch (BitcoinExchange::BadInputException &e) {
		std::cerr << "Error: not a positive number." << std::endl;
		return ;
	}
	catch (std::exception &e) {
		std::cerr << "Error: too large a number." << std::endl;
		return ;
	}

	date[4] = '-';
	date[7] = '-';
	float	btcvalue = convFloat(line.substr(12));
	std::map<std::string, float>::const_iterator it = this->_map.lower_bound(date);
	it--;
	
	std::cout << it->first << " is the last date" <<  std::endl;
	std::cout << date << " => " << std::fixed << std::setprecision(2) << btcvalue << " = " << it->second * btcvalue << std::endl;
}
