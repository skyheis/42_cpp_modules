/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:07:34 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/20 17:39:25 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
}

Zombie::Zombie(std::string name) {
    this->_name = name;
}

Zombie::~Zombie(void) {
    std::cout << this->_name << " is flying away" << std::endl;
}

void    Zombie::announce(void) const {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name) {
    this->_name = name;
}

Zombie* newZombie(std::string name) {
    return (new Zombie(name));
}

void randomChump(std::string name) {
    Zombie bob(name);
    
    bob.announce();
}