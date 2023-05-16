/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:10:00 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/16 11:10:01 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie one("Bob");
    Zombie two("Lee");
    Zombie *three = newZombie("Jon");

    two.announce();
    randomChump("Sam");
    one.announce();
    delete three;
}