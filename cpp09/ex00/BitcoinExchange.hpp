/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:29:29 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/23 00:49:58 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <map>

class BitcoinExchange {

public:

	BitcoinExchange(void);
	BitcoinExchange(std::string infile);
	BitcoinExchange(BitcoinExchange &src);
	~BitcoinExchange(void);

	BitcoinExchange &operator=(BitcoinExchange &rhs);

	void	makeDb(std::string infile);
	void	getValue(std::string infile) const ;
	
	class InvalidDBFileException : public std::exception {
		virtual const char *what() const throw() {
			return("The DB provided can't be opened, check that path is right, exist and it is readable.");
		}
	};
	class MapNotEmptyException : public std::exception {
		virtual const char *what() const throw() {
			return("The DB is not empty, can't open a new one.");
		}
	};
	class BadInputException : public std::exception {
		public:
		virtual const char *what() const throw() {
			return("Error: bad input => ");
		}
	};


private:

	std::map<std::string, float>	_map;
	// std::ifstream					_db;
};
