/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:25:51 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 09:44:17 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {

public:

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &src);
	~DiamondTrap();

	DiamondTrap &operator=(DiamondTrap const &rhs);

	void	attack(const std::string& target);
	void	whoAmI();

private:

	std::string	_name;

};

#endif /* DIAMONDTRAP_HPP */
