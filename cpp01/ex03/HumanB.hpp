/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:12:10 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/16 12:43:41 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

public:

    HumanB(std::string name);
    ~HumanB(void);

    void attack(void) const;
    void setWeapon(Weapon &weap);
    void unsetWeapon(void);

private:

    std::string _name;
    Weapon *_weapon;

};

#endif /* HUMANB_HPP */