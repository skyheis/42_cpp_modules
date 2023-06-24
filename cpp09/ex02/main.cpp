/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:57:53 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/24 19:02:58 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static void checkInput(int ac) {
	if (ac < 3) {
		std::cerr << "Error: give me some numbers!" << std::endl;
		exit(1);
	}
}

int	main(int ac, char **av)
{
	checkInput(ac);

	PmergeMe levi(ac, av);
	double time_vec, time_deq;
	clock_t s_vec, e_vec, s_deq, e_deq;

	
	std::cout << "Before: ";
	print(levi.getVec());

	s_vec = clock();
	mergeInsertionSort(levi.getVec(), 0, levi.getVec().size() - 1, 5);
   	e_vec = clock();
    time_vec = double(e_vec - s_vec) / CLOCKS_PER_SEC * 1000;

	s_deq = clock();
	mergeInsertionSort(levi.getDeq(), 0, levi.getDeq().size() - 1, 5);
	e_deq = clock();
    time_deq = double(e_deq - s_deq) / CLOCKS_PER_SEC * 1000;


	std::cout << std::fixed << std::setprecision(3) << "After: ";
	print(levi.getDeq());
	std::cout << "For " << ac - 1 << " elements with std::vector: " << time_vec << " ms" << std::endl; 
	std::cout << "For " << ac - 1 << " elements with std::deque:  " << time_deq << " ms" << std::endl; 

}
