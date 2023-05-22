/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:10:29 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 17:34:02 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain(void) {
	std::cout << "Braaaaaainz constructor" << std::endl;
}

Brain::Brain(Brain const &src) {
	std::cout << "Braaaaaainz copy constructor" << std::endl;
	*this = src;
}

Brain::~Brain(void) {
	std::cout << "Braaaaaainz destructor" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

