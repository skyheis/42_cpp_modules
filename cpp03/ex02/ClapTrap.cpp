/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:39:58 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/21 18:13:45 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hp(10), _stamina(10), _attackdamage(0) {
	std::cout << "ClapTrap constructor called without the name" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _stamina(10), _attackdamage(0) {
	std::cout << "ClapTrap constructor called, named: " << this->_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "ClapTrap copy constructor called for " << this->_name << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called for " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs) {
	this->_name = rhs.getName();
	this->_hp = rhs.getHp();
	this->_stamina = rhs.getStamina();
	this->_attackdamage = rhs.getAttackDamage();
	return (*this);
}

std::string		ClapTrap::getName(void) const {
	return (this->_name);
}

unsigned int	ClapTrap::getHp(void) const {
	return (this->_hp);
}

unsigned int	ClapTrap::getStamina(void) const {
	return (this->_stamina);
}

unsigned int	ClapTrap::getAttackDamage(void) const {
	return (this->_attackdamage);
}


void	ClapTrap::attack(const std::string& target) {
	if (this->_stamina > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
		_stamina--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is out of stamina and can't attack!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " take " << amount;
	if (amount >= this->_hp)
	{
		std::cout << " and is out of hit points :c" << std::endl;
		this->_hp = 0;
	}
	else
	{
		this->_hp -= amount;
		std::cout << " and have " << this->_hp << " remaining" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_stamina > 0)
	{
		std::cout << "ClapTrap " << this->_name << " is getting repaired of " << amount;
		if (amount + this->_hp >= 10)
		{
			std::cout << " and now have full hit points!" << std::endl;
			this->_hp = 10;
		}
		else
		{
			this->_hp += amount;
			std::cout << " and now have " << this->_hp << " remaining" << std::endl;
		}
		_stamina--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is out of stamina and can't be repaired!" << std::endl;
}

