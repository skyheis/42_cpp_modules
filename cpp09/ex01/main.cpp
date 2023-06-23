/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:31:51 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/23 19:43:42 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cerr << "Error: the arguments must be 2!" << std::endl;
	try {
		ft_rpn(av[1]);
	}
	catch (std::exception &e) {
		std::cout << "Error: your polish notation from Australia sucks" << std::endl;
	}
}
