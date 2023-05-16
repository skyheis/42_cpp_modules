/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:05:13 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/16 12:46:38 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

public:

    Weapon(std::string type);
    ~Weapon(void);

    const std::string &getType(void) const;
    void setType(std::string type);

private:

    std::string _type;
};

#endif /* WEAPON_HPP */