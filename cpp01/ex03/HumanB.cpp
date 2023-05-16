/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:18:17 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/16 12:43:49 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
    this->_weapon = NULL;
}

HumanB::~HumanB(void) {
    
}

void HumanB::attack(void) const {
    if (!this->_weapon)
        std::cout << this->_name << " is unarmed" << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weap) {
    this->_weapon = &weap;
}

void HumanB::unsetWeapon(void) {
    this->_weapon = NULL;
}