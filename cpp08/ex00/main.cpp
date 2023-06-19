/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:55:06 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/19 15:43:32 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstdlib>
#include <vector>
#include <list>

int	main(void) {
	
	std::vector<int>	loli;
	std::list<int>		popi;

	
	srand(time(NULL));
	for (int i = 0; i < 30; i++){
		loli.push_back(rand() % 30);
		popi.push_back(rand() % 30);
	}
	// for (long unsigned int i = 0; i < loli.size(); i++) {
	// 	std::cout << loli[i] << " ";
	// }
	// std::cout << std::endl;
	print(loli);
	std::cout << std::endl;

	int f_el = 13;

	try {
		std::cout << "Search element: " << f_el << std::endl; 
		// loli.erase(loli.begin() + easyfind(loli, 13));
		std::vector<int>::iterator it = easyfind(loli, f_el);
		
		std::cout << "Element " << *it << " founded" << std::endl;
	}
	catch (std::exception &ex){
		std::cout << "Element not in container" << std::endl;
	}
		
	std::cout << std::endl;
	print(popi);
	std::cout << std::endl;

	try {
		std::cout << "Search element: " << f_el << std::endl; 
		// loli.erase(loli.begin() + easyfind(loli, 13));
		std::list<int>::iterator ti = easyfind(popi, f_el);
		
		std::cout << "Element " << *ti << " founded" << std::endl;
	}
	catch (std::exception &ex){
		std::cout << "Element not in container" << std::endl;
	}
	// print(loli);
}

