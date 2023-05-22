/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:24:58 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 09:52:19 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap loli;
	DiamondTrap koki("koki");
	
	loli.attack("sosi");
	loli.whoAmI();
	koki.whoAmI();
	koki.beRepaired(111);
	koki.highFivesGuys();
	koki.takeDamage(99);

}
	// FragTrap popi("koki");
	// FragTrap uoui(popi);

	// popi.takeDamage(90);
	// popi.takeDamage(90);
	// popi.highFivesGuys();
	// uoui.attack("sosi");

	// ScavTrap popi("koki");
	// ScavTrap uoui(popi);
	// ClapTrap coci("sosi");
	// ClapTrap rori(coci);

	// coci.attack("qoqi");
	// popi.attack("fofi");
	// popi.takeDamage(2);
	// popi.guardGate();
	// /* rori.guardGate(); */
	
	// popi.beRepaired(11);
	// popi.beRepaired(11);
	// popi.beRepaired(11);
	// std::cout << std::endl << popi.getName() << "'s stamina is " << popi.getStamina() << std::endl << std::endl;
	// popi.beRepaired(11);
	// popi.beRepaired(11);
	// popi.beRepaired(11);
	// popi.beRepaired(11);
	// popi.beRepaired(11);
	// popi.beRepaired(11);
	// popi.attack("fofi");
	// popi.beRepaired(11);
	// popi.beRepaired(11);
	// std::cout << std::endl << "Now attack with sosi, that is a copy of popi, so they have the same name, but sosi have stamina left" << std::endl << std::endl;
	// sosi.attack("coci");

	//ClapTrap loli = popi;
