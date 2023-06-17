/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:19:28 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/17 12:07:56 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cstdlib>
#include <cerrno>
#include <iomanip>

class ScalarConverter {

public:

	static void convert(std::string const &str);

private:

	static char		_c;
	static int		_i;
	static float	_f;
	static double	_d;
	static bool		_posChar;
	static bool		_posInt;

	ScalarConverter(void);
	ScalarConverter(ScalarConverter const & src);
	~ScalarConverter(void);

	ScalarConverter & operator=(ScalarConverter const & rhs);
	
	static void convChar(std::string const &str);
	static void convInt(std::string const &str);
	static void convFloat(std::string const &str);
	static void convDouble(std::string const &str);
};

typedef bool (*typeInput)(std::string const &str);
typedef void (*typeConv)(std::string const &str);


std::string str2int(int &i, char const *s, int base);
bool isChar(std::string const &str);
bool isInt(std::string const &str);
bool isFloat(std::string const &str);
bool isDouble(std::string const &str);
void printType(int i);
