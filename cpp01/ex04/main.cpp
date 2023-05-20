/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:04:32 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/20 18:34:19 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mysed.hpp"

int main(int ac, char **av)
{
    ft_chech_args(ac);
    
    std::ifstream infile(av[1]);
    ft_chech_file(infile);
    std::ofstream repfile;
    
    size_t      pos;
    std::string tmp = av[1];
    std::string sin = av[2];
    std::string sout = av[3];

    tmp.append(".replace");
    repfile.open(tmp.c_str());
    
    while (std::getline(infile, tmp))
    {
        pos = tmp.find(sin, 0);
        while (pos != tmp.npos)
        {
            tmp.erase(pos, sin.length());
            tmp.insert(pos, sout);
            pos = tmp.find(sin, 0);
        }
        repfile << tmp << std::endl;
    }
    infile.close();
    repfile.close();
}