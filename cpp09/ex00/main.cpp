/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:28:19 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/22 11:36:32 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2){
		std::cerr << "Invalid number of arguments." << std::endl;
		return (1);
	}
	BitcoinExchange btc(av[1]);
}
