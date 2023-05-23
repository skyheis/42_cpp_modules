/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 22:35:51 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/23 11:59:23 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"

Ice::Ice(void) : AMateria("ice") {
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(Ice const &src) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice(void) {
	std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs) {
	this->_type = rhs._type;
	return (*this);
}

Ice* Ice::clone() const {
	return (new Ice());
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << target.getName() << std::endl;
}

