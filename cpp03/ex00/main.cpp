/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:24:58 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 09:13:40 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap popi("koki");
	ClapTrap loli;
	ClapTrap sosi = popi;

	popi.attack("fofi");
	popi.takeDamage(9);
	popi.takeDamage(2);
	popi.beRepaired(11);
	popi.beRepaired(11);
	popi.beRepaired(11);
	//std::cout << std::endl << "popi's stamina is " << popi.getStamina() << std::endl << std::endl;
	popi.beRepaired(11);
	popi.beRepaired(11);
	popi.beRepaired(11);
	popi.beRepaired(11);
	popi.beRepaired(11);
	popi.beRepaired(11);
	popi.attack("fofi");
	popi.beRepaired(11);
	popi.beRepaired(11);
	std::cout << std::endl << "Now attack with sosi, that is a copy of popi, so they have the same name, but sosi have stamina left" << std::endl << std::endl;
	sosi.attack("coci");

	//ClapTrap loli = popi;
}
