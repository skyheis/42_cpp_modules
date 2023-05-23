/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 09:16:16 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/23 11:59:34 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"

Cure::Cure(void) : AMateria("cure") {
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(Cure const &src) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure(void) {
	std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &rhs) {
	this->_type = rhs._type;
	return (*this);
}

Cure* Cure::clone() const {
	return (new Cure());
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << target.getName() << std::endl;
}
