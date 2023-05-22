/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:26:28 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 16:33:21 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog(void) : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &src) : Animal(src) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;	
}

Dog &Dog::operator=(Dog const &rhs) {
	std::cout << "Dog operator= called" << std::endl;	
	this->_type = rhs._type;
	return (*this);
}

// std::string Dog::getType(void) {
// 	return (this->_type);
// }

void Dog::makeSound(void) const {
	std::cout << "*RUFF RUFF*" << std::endl;
}
