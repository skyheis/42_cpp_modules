/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mysed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:20:26 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/16 15:24:57 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mysed.hpp"

void    ft_chech_args(int ac)
{
    if (ac != 4){
        std::cerr << "The arguments must be three" << std::endl;
        exit(1);
    }
}

void    ft_chech_file(std::ifstream &inf)
{
    if (inf.fail()){
        std::cerr << "The file doesn't exist" << std::endl;
        inf.close();
        exit(1);
    }
}
