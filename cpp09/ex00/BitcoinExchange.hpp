/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:29:29 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/22 11:36:06 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <map>

class BitcoinExchange {
	// ogni nodo ha una "stringa formato data" e un "float 0-1000"

public:

	BitcoinExchange(void);
	BitcoinExchange(std::string infile);
	BitcoinExchange(BitcoinExchange &src);
	~BitcoinExchange(void);

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

	void	makeDb(std::string infile);

private:

	std::map<std::string, float>	_map;
	// std::ifstream					_db;
};
