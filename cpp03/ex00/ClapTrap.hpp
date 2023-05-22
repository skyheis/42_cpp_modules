/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:41:11 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 09:15:03 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap {

public:

	ClapTrap(void);								// canon constr void
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);				// canon constr copy
	~ClapTrap(void);							// canon deconstr

	ClapTrap& operator=(ClapTrap const &rhs);	// canon operator=

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

private:

	std::string		_name;
	unsigned int	_hp;
	unsigned int	_stamina;
	unsigned int	_attackdamage;

};

#endif /* CLAPTRAP_H */

// std::string		getName(void) const;
// unsigned int	getHp(void) const;
// unsigned int	getStamina(void) const;
// unsigned int	getAttackDamage(void) const;

// std::string		ClapTrap::getName(void) const {
// 	return (this->_name);
// }

// unsigned int	ClapTrap::getHp(void) const {
// 	return (this->_hp);
// }

// unsigned int	ClapTrap::getStamina(void) const {
// 	return (this->_stamina);
// }

// unsigned int	ClapTrap::getAttackDamage(void) const {
// 	return (this->_attackdamage);
// }
