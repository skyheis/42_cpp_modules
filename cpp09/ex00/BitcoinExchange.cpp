/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:29:10 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/22 11:37:03 by ggiannit         ###   ########.fr       */
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


float convFloat(std::string s) {
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
		std::cout << "it-f " << key << std::endl;
		std::cout << "floa " << value << std::endl;
		this->_map.insert(std::pair<std::string, float>(key, value));
	}
}
