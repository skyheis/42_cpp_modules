/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:14:54 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 18:25:30 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

AMateria::AMateria(void) : _type("notype") {
	std::cout << "AAnimal nodef constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
	std::cout << "AAnimal def constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src) {
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AMateria::~AMateria(void) {
	std::cout << "AAnimal destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs) {
	this->_type = rhs._type;
	return (*this);
}

std::string const &AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {

}

