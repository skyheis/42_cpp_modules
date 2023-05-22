/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:11:17 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 13:34:38 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal(void) : _type("unicorn") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;	
}

Animal &Animal::operator=(Animal const &rhs) {
	std::cout << "Animal operator= called" << std::endl;	
	this->_type = rhs._type;
	return (*this);
}

std::string Animal::getType(void) const {
	return (this->_type);
}

void Animal::makeSound(void) const {
	std::cout << "*GENERIC ANIMAL SOUND*" << std::endl;
}
