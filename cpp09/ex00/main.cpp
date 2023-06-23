/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:28:19 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/23 00:50:02 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac != 2){
		std::cerr << "Invalid number of arguments." << std::endl;
		return (1);
	}
	
	BitcoinExchange btc("data.csv");
	std::ifstream	file_in(av[1]);
	std::string		line;

	if (file_in.fail()) {
		std::cerr << "Invalid file." << std::endl;
		return (1);
	}
	getline(file_in, line);
	if (line.compare("date | value")) {
		std::cerr << "Ivalid file format.\nThe first line must have\n\t'date | value'" << std::endl;
		return (1);
	}
	while (getline(file_in, line)) {
		btc.getValue(line);
	}
}
