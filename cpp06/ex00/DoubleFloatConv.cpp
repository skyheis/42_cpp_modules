/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DoubleFloatConv.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 18:01:32 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/16 18:55:16 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


void	printFloat(std::string const &str) {
	float f = std::strtof(str.c_str(), NULL);

	std::cout << "float: " << f << "f" << std::endl;
	return ;

	if (static_cast<int>(f) < 0 || static_cast<int>(f) > 127)
		std::cout << "char: " << "impossible" << std::endl;
	else if (isprint(static_cast<char>(f)))
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	if ( f >= std::numeric_limits<int>::min()
			&& f <= std::numeric_limits<int>::max())
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << std::fixed << std::setprecision(4) << "float: " << f << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(4) << "double: " << static_cast<double>(f) << std::endl;
}

// std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(i) << "f" << std::endl;
// std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(i) << std::endl;

void	printDouble(std::string const &str) {
	(void)str;
	// std::cout << "char: " << static_cast<char>(d) << std::endl;
	// std::cout << "int: " << static_cast<int>(d) << std::endl;
	// std::cout << "float: " << static_cast<float>(d) << std::endl;
	// std::cout << "double: " << d << std::endl;
}
