/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:19:23 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/16 20:06:54 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ScalarConverter(void);
// ScalarConverter(ScalarConverter const & src);
// ~ScalarConverter(void);

// ScalarConverter & operator=(ScalarConverter const & rhs);

char ScalarConverter::_c;
int ScalarConverter::_i;
float ScalarConverter::_f;
double ScalarConverter::_d;


void ScalarConverter::convChar(std::string const &str) {
	_c = str[0];
	_i = static_cast<int>(_c);
	_f = static_cast<float>(_c);
	_d = static_cast<double>(_c);
}

void ScalarConverter::convInt(std::string const &str) {

	str2int(_i, str.c_str(), 0);
	_c = static_cast<char>(_i);
	_f = static_cast<float>(_i);
	_d = static_cast<double>(_i);
}

void ScalarConverter::convFloat(std::string const &str) {
	double dd = std::strtod(str.c_str(), NULL);

	if (dd >= std::numeric_limits<float>::max() || dd <= std::numeric_limits<float>::min())
	{
		_f = 0;
	}
	else
		_f = static_cast<float>(dd);
	_c = static_cast<char>(dd);
	_i = static_cast<int>(dd);
	_d = dd;
}

void ScalarConverter::convDouble(std::string const &str) {
	_d = std::strtod(str.c_str(), NULL);
	_c = static_cast<char>(_d);
	_i = static_cast<int>(_d);
	_f = static_cast<float>(_d);
}


void ScalarConverter::convert(std::string const &str) {
	int i;
	typeInput type[4] = {isChar, isInt, isDouble, isFloat};
	typeConv conv[4] = {ScalarConverter::convChar, ScalarConverter::convInt, ScalarConverter::convDouble, ScalarConverter::convFloat};
	
	for (i = 0; i < 4; i++) {
		if (type[i](str)) {
			conv[i](str);
			break ;
		}
	}
	std::cout << "i is " << i << std::endl;
	if (i > 3)
		std::cout << "Error: invalid input" << std::endl;
	else {
		std::cout << "char: " << _c << std::endl;
		std::cout << "int: " << _i << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(4) << _f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(4) << _d << std::endl;
	}

}

// std::numeric_limits<int>::max();
// std::numeric_limits<int>::min();
// -DBL_MAX 
