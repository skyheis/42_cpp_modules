/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:18:17 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/20 19:58:53 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap) : _name(name), _weapon(weap) {}

HumanA::~HumanA(void) {

}

void	HumanA::setWeapon(Weapon const & weap) {
	this->_weapon = weap;
}

Weapon &HumanA::getWeapon(void) const {
	return (this->_weapon);
}


void HumanA::attack(void) const {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
