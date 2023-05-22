/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:09:24 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 09:52:49 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), _name(ClapTrap::_name + "_clap_name") {
	this->_hp = FragTrap::_hp;
	this->_stamina = ScavTrap::_stamina;
	this->_attackdamage = FragTrap::_attackdamage;
	std::cout << "DiamondTrap constructor called without the name" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), _name(name + "_clap_name") {
	this->_hp = FragTrap::_hp;
	this->_stamina = ScavTrap::_stamina;
	this->_attackdamage = FragTrap::_attackdamage;
	std::cout << "DiamondTrap constructor called, named: " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) {
	std::cout << "DiamondTrap copy constructor called for " << this->_name << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called for " << this->_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) {
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_stamina = rhs._stamina;
	this->_attackdamage = rhs._attackdamage;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target) {
	std::cout << "DiamondTrap " << this->_name << " attack using ScavTrap!" << std::endl;
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap use whomai!\n\tis name : " << this->_name << "\n\tClapname: " << ClapTrap::_name << std::endl;
}
