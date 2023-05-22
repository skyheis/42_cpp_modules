/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:36:54 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 15:50:45 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal(void) : _type("gigi") {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;	
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
	std::cout << "WrongAnimal operator= called" << std::endl;	
	this->_type = rhs._type;
	return (*this);
}

std::string WrongAnimal::getType(void) const {
	return (this->_type);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "*WRONGANIMAL SOUND*" << std::endl;
}
