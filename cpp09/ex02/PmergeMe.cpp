/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:57:55 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/24 17:40:42 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(int ac, char **av) {
	for (int i = 1; i < ac; i++)
	{	
		std::string str(av[i]);
		if (!isUnInt(str))
		{
			std::cerr << "Error: " << av[i] << " is not a positive integer number!" << std::endl;
			exit(1);
		}
	}
	for (int i = 1; i < ac; i++)
	{
		this->_vec.push_back(std::atoi(av[i]));
		this->_deq.push_back(std::atoi(av[i]));
	}
}

PmergeMe::PmergeMe(PmergeMe const &src) {
	*this = src;
}

PmergeMe::~PmergeMe(void) {}

PmergeMe	&PmergeMe::operator=(PmergeMe const &rhs) {
	if (this != &rhs)
	{
		this->_vec = rhs._vec;
		this->_deq = rhs._deq;
	}
	return (*this);
}

std::vector<unsigned int> &PmergeMe::getVec(void) {
	return (this->_vec);
}

std::deque<unsigned int> &PmergeMe::getDeq(void) {
	return (this->_deq);
}

bool isUnInt(std::string const &str) {
	std::stringstream ss(str);
	long int i;

	ss >> i;
	if (i < 0 || i > std::numeric_limits<unsigned int>::max())
		return (false);
	return (ss.eof() && !ss.fail());
}
