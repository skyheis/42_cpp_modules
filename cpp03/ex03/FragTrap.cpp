/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:37:41 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 09:19:52 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap constructor called without the name" << std::endl;
	this->_hp = 100;
	this->_stamina = 100;
	this->_attackdamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called, named: " << this->_name << std::endl;
	this->_hp = 100;
	this->_stamina = 100;
	this->_attackdamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {
	std::cout << "FragTrap copy constructor called for " << this->_name << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs) {
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_stamina = rhs._stamina;
	this->_attackdamage = rhs._attackdamage;
	return (*this);
}

void	FragTrap::attack(const std::string& target) {
	if (this->_stamina > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
		_stamina--;
	}
	else if (!this->_hp)
		std::cout << "FragTrap " << this->_name << " can't attacks because is out of hit points :c" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " is out of stamina and can't attack!" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << this->_name << " is trying to highfive!" << std::endl;
}
