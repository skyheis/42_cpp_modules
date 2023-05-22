/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:26:28 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 17:35:53 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog(void) : AAnimal() {
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &src) : AAnimal(src) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = src._type;
	this->_brain = new Brain();
}

Dog::~Dog(void) {
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs) {
	std::cout << "Dog operator= called" << std::endl;	
	this->_type = rhs._type;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "*RUFF RUFF*" << std::endl;
}
