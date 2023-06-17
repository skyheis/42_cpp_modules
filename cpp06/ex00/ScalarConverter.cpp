/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:19:23 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/17 12:09:39 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(ScalarConverter const & src) {
	*this = src;
}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const & rhs) {
	_c = rhs._c;
	_i = rhs._i;
	_f = rhs._f;
	_d = rhs._d;
	_posChar = rhs._posChar;
	_posInt = rhs._posInt;
	return (*this);
}

char ScalarConverter::_c;
int ScalarConverter::_i;
float ScalarConverter::_f;
double ScalarConverter::_d;
bool ScalarConverter::_posChar;
bool ScalarConverter::_posInt;


void ScalarConverter::convChar(std::string const &str) {
	_c = str[0];
	_i = static_cast<int>(_c);
	_f = static_cast<float>(_c);
	_d = static_cast<double>(_c);
}

void ScalarConverter::convInt(std::string const &str) {

	str2int(_i, str.c_str(), 0);
	if (_i < 0 || _i > 127)
		_posChar = false;
	_c = static_cast<char>(_i);
	_f = static_cast<float>(_i);
	_d = static_cast<double>(_i);
}

void ScalarConverter::convFloat(std::string const &str) {
	double dd = std::strtod(str.c_str(), NULL);

	if (dd >= std::numeric_limits<float>::max() || dd <= std::numeric_limits<float>::min())
		_f = 0;
	else
		_f = static_cast<float>(dd);
	if (_f < 0 || _f > 127)
		_posChar = false;
	_c = static_cast<char>(dd);
	if (_f < std::numeric_limits<int>::min() || _f > std::numeric_limits<int>::max())
		_posInt = false;
	_i = static_cast<int>(dd);
	_d = dd;
}

void ScalarConverter::convDouble(std::string const &str) {
	_d = std::strtod(str.c_str(), NULL);
	if (_d < 0 || _d > 127)
		_posChar = false;
	_c = static_cast<char>(_d);
	if (_d < std::numeric_limits<int>::min() || _d > std::numeric_limits<int>::max())
		_posInt = false;
	_i = static_cast<int>(_d);
	_f = static_cast<float>(_d);
}

void ScalarConverter::convert(std::string const &str) {
	int i;
	typeInput type[4] = {isChar, isInt, isDouble, isFloat};
	typeConv conv[4] = {ScalarConverter::convChar, ScalarConverter::convInt, ScalarConverter::convDouble, ScalarConverter::convFloat};
	
	_posChar = true;
	_posInt = true;
	if (std::string(str).compare("nan") == 0 || std::string(str).compare("nanf") == 0) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	
	for (i = 0; i < 4; i++) {
		if (type[i](str)) {
			conv[i](str);
			break ;
		}
	}

	if (i > 3)
		std::cout << "Error: invalid input" << std::endl;
	else {
		// printType(i);
		
		if (_posChar && std::isprint(_c))
			std::cout << "char: '" << _c << "'" << std::endl;
		else if (_posChar)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
		if (_posInt)
			std::cout << "int: " << _i << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(4) << _f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(4) << _d << std::endl;
	}
}

// std::numeric_limits<int>::max();
// std::numeric_limits<int>::min();
// -DBL_MAX 
