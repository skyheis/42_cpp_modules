/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:32:26 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/18 18:56:16 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int			loli[5] = {1, 2, 3, 4, 5};
	char		sosi[5] = {'a', 'b', 'c', 'd', 'e'};
	std::string	popi[5] = {"abc", "def", "ghi", "jkl", "mno"};

	iter(loli, 5, dosomething);
	std::cout << std::endl;
	iter(sosi, 5, dosomething);
	std::cout << std::endl;
	iter(popi, 5, dosomething);
	std::cout << std::endl;
}
