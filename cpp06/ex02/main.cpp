/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:48:56 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/17 15:28:38 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BaseABC.hpp"

int main(void)
{
	Base *base;
	
	base = generate();
	identify(base);
	identify(*base);
	
	delete base;
	std::cout << std::endl;

	base = generate();
	identify(base);
	identify(*base);
	
	delete base;
	std::cout << std::endl;
	
	base = generate();
	identify(base);
	identify(*base);
	
	delete base;
	std::cout << std::endl;

	base = generate();
	identify(base);
	identify(*base);
	
	delete base;
	return (0);
}
