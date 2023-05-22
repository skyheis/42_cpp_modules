/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:37:41 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 09:19:47 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap constructor called without the name" << std::endl;
	this->_hp = 100;
	this->_stamina = 50;
	this->_attackdamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called, named: " << this->_name << std::endl;
	this->_hp = 100;
	this->_stamina = 50;
	this->_attackdamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {
	std::cout << "ScavTrap copy constructor called for " << this->_name << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called for " << this->_name << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs) {
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_stamina = rhs._stamina;
	this->_attackdamage = rhs._attackdamage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_stamina > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
		_stamina--;
	}
	else if (!this->_hp)
		std::cout << "ScavTrap " << this->_name << " can't attacks because is out of hit points :c" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is out of stamina and can't attack!" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << this->_name << " is now in Gatekeeper mode" << std::endl;
}
