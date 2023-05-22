/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:24:19 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 13:16:50 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat(void) : Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &src) : Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;	
}

Cat &Cat::operator=(Cat const &rhs) {
	std::cout << "Cat operator= called" << std::endl;	
	this->_type = rhs._type;
	return (*this);
}

// std::string Cat::getType(void) {
// 	return (this->_type);
// }

void Cat::makeSound(void) const {
	std::cout << "*MEOW*" << std::endl;
}
