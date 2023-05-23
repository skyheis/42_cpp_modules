/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:14:54 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/23 11:56:59 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

AMateria::AMateria(void) : _type("notype") {
	std::cout << "AMateria nodef constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
	std::cout << "AMateria def constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs) {
	this->_type = rhs._type;
	return (*this);
}

std::string const &AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "Generic materia shoot " << target.getName() << std::endl;
}

