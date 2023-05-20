/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:31:59 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/20 16:09:13 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact(void) {
    return ;
}

Contact::~Contact(void) {
    return ;
}

static void    ft_fill_line(std::string out, std::string *in)
{
    std::string tmp;

    std::cout << out;
    while (std::getline(std::cin, tmp) && !tmp[0])
    {
        std::cout << "No empty fields!" << std::endl << out;
    }
    *in = tmp;
}

static int         ft_is_phonenumber(std::string pn) {
    int i;
    
    if ((!std::isdigit(pn[0]) && pn[0] != '+') || (pn[0] == '+' && !std::isdigit(pn[1])))
    {
        std::cout << "Please enter a valid number (no brackets, only '+' and digits allowed)" << std::endl;        
        return (false);
    }
    for (i = 1; pn[i]; i++)
    {
        if (!std::isdigit(pn[i]))
        {
            std::cout << "Please enter a valid number (no brackets, only '+' and digits allowed)" << std::endl;
            return (false);
        }
    }
    if ((pn[0] == '+' && i < 4) || i < 3)
    {
        std::cout << "Please enter a valid number (min 3 digits)" << std::endl;
        return (false);
    }
    return (true);
}

void        Contact::init(int i) {
    std::string tmp_num;
    
    this->_index = i;
    ft_fill_line("Firstname: ", &this->_firstname);
    ft_fill_line("Lastname: ", &this->_lastname);
    ft_fill_line("Nickname: ", &this->_nickname);
    ft_fill_line("Number: ", &tmp_num);
    while (!ft_is_phonenumber(tmp_num))
        ft_fill_line("Number: ", &tmp_num);
    this->_phonenumber = tmp_num;
    ft_fill_line("Darkest secret: ", &this->_dardsecret);
}

int         Contact::getInd(void) const {
    return (this->_index);
}

std::string Contact::getFirst(void) const {
    return (this->_firstname);
}

std::string Contact::getLast(void) const {
    return (this->_lastname);
}

std::string Contact::getNick(void) const {
    return (this->_nickname);
}

std::string Contact::getNumber(void) const {
    return (this->_phonenumber);
}

std::string Contact::getSecret(void) const {
    return (this->_dardsecret);
}
