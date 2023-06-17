/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:51:53 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/17 11:43:35 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2 || av[1][0] == '\0')
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	ScalarConverter::convert(av[1]);
	return (0);
}
