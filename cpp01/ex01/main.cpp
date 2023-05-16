/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:09:56 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/16 11:20:55 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int i = 0;
    //Zombie one("Bob");
    Zombie *horde = zombieHorde(8, "Jim");

    for (i = 0; i < 8; i++)
    {
        horde[i].announce();
    }
    delete [] horde;
}