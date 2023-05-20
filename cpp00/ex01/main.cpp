/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:32:15 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/20 16:07:42 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

int ft_stoindex(std::string s)
{
    int i = 0;

    if (s[0] == '\0')
        return (0);
    if (s[i] >= '1' && s[i] <= '8' && s[1] == '\0')
        return (s[i] - 48);
    std::cout << "Please enter a number between 1 and 8 (no space, no extra letter)" << std::endl;
    return (-1);
}

int main(void)
{
    PhoneBook loli;
    std::string str_in;

    std::cout << "Please enter one of this three commands:\n - ADD (add contact)\n - SEARCH (search in phonebook)\n - EXIT (guess what.. :D ) " << std::endl;
    std::cout << "phonebook > ";
    while (std::getline(std::cin, str_in) && str_in.compare("EXIT"))
    {
        if (!str_in.compare("ADD"))
            loli.addContact();
        else if(!str_in.compare("SEARCH"))
        {
            loli.search();
            std::cout << std::endl;
            std::cout << "Select a contact to get information or press 'ENTER' to skip: ";
            std::getline(std::cin, str_in);
            while (ft_stoindex(str_in) == -1)
            {
                std::cout << "Select: ";
                std::getline(std::cin, str_in);
            }
            if (ft_stoindex(str_in))
                loli.printCont(ft_stoindex(str_in));
        }
        std::cout << "phonebook > ";
    }
    return (0);
}