/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 09:53:33 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/23 12:24:22 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

Character::Character(void) : _name("yn") {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_floor = NULL;
	std::cout << "Character constructor default name called" << std::endl;
}

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_floor = NULL;
	std::cout << "Character constructor with name called" << std::endl;
}

Character::Character(Character const &src) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

Character::~Character(void) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	// if (this->_floor)
	// 	delete this->_floor;
	std::cout << "Character destructor called" << std::endl;
}

Character &Character::operator=(Character const &rhs) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = rhs._inventory[i];
	this->_name = rhs._name;
	this->_floor = NULL;
	return (*this);
}

std::string const & Character::getName(void) const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	int i = 0;

	while (this->_inventory[i] && i < 4)
		i++;
	if (i == 4)
		delete m;
	else
		_inventory[i] = m;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
	{
		std::cout << "Please use index between 0 and 3" << std::endl;
		return ;
	}
	if (this->_floor)
		delete _floor;
	_floor = _inventory[idx];
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3)
		std::cout << "Please use index between 0 and 3" << std::endl;
	else if (!this->_inventory[idx])
		std::cout << "You can't use a materia that you don't have, daaa" << std::endl;
	else
		this->_inventory[idx]->use(target);
}
