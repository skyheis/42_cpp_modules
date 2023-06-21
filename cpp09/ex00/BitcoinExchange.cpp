/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:29:10 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/21 17:52:27 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	BitcoinExchange::makeDb(std::string infile) {
	std::ifstream	db(infine);
	std::string		tmp;
	
	if (db.fail()) {
		db.close();
		throw InvalidDBFileException();
	}
	getline(db, tmp);
	if (tmp.compare("date,exchange_rate")) {
		db.close();
		throw InvalidDBFileException();
	}

	while (getline(db, tmp))
	{
		
	}
}
