/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 09:41:19 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/23 11:47:22 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "ICharacter.class.hpp"

class Character : public ICharacter {

public:

	Character(void);
	Character(std::string name);
	Character(Character const &src);
	~Character(void);

	Character &operator=(Character const &rhs);

	std::string const & getName(void) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:

	std::string	_name;
	AMateria	*_inventory[4];
	AMateria	*_floor;

};
