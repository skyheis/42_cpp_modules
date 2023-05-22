/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:24:19 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 17:34:12 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat(void) : AAnimal() {
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &src) : AAnimal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = src._type;
	this->_brain = new Brain();
}

Cat::~Cat(void) {
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
	std::cout << "Cat operator= called" << std::endl;	
	this->_type = rhs._type;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "*MEOW*" << std::endl;
}
