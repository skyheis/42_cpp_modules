/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:11:17 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 17:34:24 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"

AAnimal::AAnimal(void) : _type("unicorn") {
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal destructor called" << std::endl;	
}

AAnimal &AAnimal::operator=(AAnimal const &rhs) {
	std::cout << "AAnimal operator= called" << std::endl;	
	this->_type = rhs._type;
	return (*this);
}

std::string AAnimal::getType(void) const {
	return (this->_type);
}
