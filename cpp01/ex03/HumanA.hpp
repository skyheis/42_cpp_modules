/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:12:10 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/20 19:58:10 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

public:

    HumanA(std::string name, Weapon &weap);
    ~HumanA(void);

    void 	attack(void) const;
	Weapon &getWeapon(void) const;
	void	setWeapon(Weapon const & weap);


private:

    std::string _name;
    Weapon &_weapon ;

};

#endif /* HUMANA_HPP */
