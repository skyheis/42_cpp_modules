/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:31:59 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/15 15:31:59 by ggiannit         ###   ########.fr       */
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
        std::cout << "The empty fields!" << std::endl << out;
    }
    *in = tmp;
}

void Contact::init(int i) {
    this->_index = i;
    ft_fill_line("Firstname: ", &this->_firstname);
    ft_fill_line("Lastname: ", &this->_lastname);
    ft_fill_line("Nickname: ", &this->_nickname);
}

int Contact::getind(void) const {
    return (this->_index);
}

std::string Contact::getfirst(void) const {
    return (this->_firstname);
}

std::string Contact::getlast(void) const {
    return (this->_lastname);
}

std::string Contact::getnick(void) const {
    return (this->_nickname);
}