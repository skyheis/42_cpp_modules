/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:29:29 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/21 13:45:32 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>

class BitcoinExchange {
	// ogni nodo ha una "stringa formato data" e un "float 0-1000"
	BitcoinExchange(void); //empty _db
	BitcoinExchange(std::string infile) {
		this->makeDb(infile);
	}
	~BitcoinExchange(void);

	class InvalidDBFileException : public exception {
		virtual const char *what() const throw() {
			std::cerr << "The DB provided can't be opened, check that path is right, exist and it is readable."
		}
	}

	void	makeDb(std::string infile);

private:
	std::map<std::string, float>	_map;
	// std::ifstream					_db;
}
