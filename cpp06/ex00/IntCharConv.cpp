/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntCharConv.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:17:02 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/16 19:11:23 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isChar(std::string const &str) {
	return ((str.length() == 1 && !isdigit(str[0])) ? true : false);
}


bool isInt(std::string const &str) {
	std::stringstream ss(str);
	int i;

	ss >> i;
	return (ss.eof() && !ss.fail());
}

bool isDouble(std::string const &str) {
	std::stringstream ss(str);
	double d;

	ss >> d;
	return (ss.eof() && !ss.fail());
}

bool isFloat(std::string const &str) {
	std::stringstream ss(str);
	float f;

	ss >> f;
	return (ss.eof() && !ss.fail());
}


std::string str2int(int &i, char const *s, int base)
{
    char *end;
    long  l;
    errno = 0;
    l = strtol(s, &end, base);
    if ((errno == ERANGE && l == std::numeric_limits<long int>::max())
			|| l > std::numeric_limits<int>::max()) {
        return "OVERFLOW";
    }
    if ((errno == ERANGE && l == std::numeric_limits<long int>::min())
			|| l < std::numeric_limits<int>::min()) {
        return "UNDERFLOW";
    }
    if (*s == '\0' || *end != '\0') {
        return "INCONVERTIBLE";
    }
    i = l;
    return "OK";
}








// void	printChar(std::string const &str) {
// 	char c = str[0];
	
// 	if (isprint(c))
// 		std::cout << "char: '" << c << "'" << std::endl;
// 	else
// 		std::cout << "char: Non displayable" << std::endl;
// 	std::cout << "int: " << static_cast<int>(c) << std::endl;
// 	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(c) << "f" << std::endl;
// 	std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(c) << std::endl;
// }



// void	printInt(std::string const &str) {
// 	int i;
// 	std::string ret = str2int(i, str.c_str());
	
// 	if (i < 0 || i > 127)
// 		std::cout << "char: " << "impossible" << std::endl;
// 	else if (isprint(i))
// 		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
// 	else
// 		std::cout << "char: " << "Non displayable" << std::endl;
// 	if ( ret == "OK")
// 		std::cout << "int: " << i << std::endl;
// 	else
// 		std::cout << "int: impossible" << std::endl;
// 	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(i) << "f" << std::endl;
// 	std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(i) << std::endl;
// }
