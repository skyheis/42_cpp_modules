/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:23:52 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/16 11:14:08 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N < 0)
        return (NULL);

    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++){
        horde[i].setName(name);
    }
    return (horde);
}