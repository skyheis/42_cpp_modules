/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:12:10 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/16 12:29:50 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

public:

    HumanA(std::string name, Weapon &weap);
    ~HumanA(void);

    void attack(void) const;

private:

    std::string _name;
    Weapon &_weapon ;

};

#endif /* HUMANA_HPP */