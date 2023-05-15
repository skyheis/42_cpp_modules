/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:32:04 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/15 15:32:05 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

int PhoneBook::_i = 0;

PhoneBook::PhoneBook(void) {
    return ;
}

PhoneBook::~PhoneBook(void) {
    return ;
}

void PhoneBook::addcontact(void) {
    this->book[this->_i % 8].init((this->_i % 8) + 1);
    this->_i++;
}

void ft_print_string(std::string s) {
    if (s.length() < 10)
    {
        std::cout << s;
        for (int i = 10 - s.length(); i; i--)
            std::cout << " ";
    }
    else
        std::cout << s.substr(0, 9) << ".";
}

void PhoneBook::search(void) const {
    int i = 0;

    std::cout << "|---------|----------|----------|----------|" << std::endl;
    std::cout << "|  index  |first name|last name |nick name |" << std::endl;
    std::cout << "|---------|----------|----------|----------|" << std::endl;
    while (i < 8 && i < this->_i)
    {
        std::cout << "|    " << this->book[i].getind() << "    |";
        ft_print_string(this->book[i].getfirst());
        std::cout << "|";
        ft_print_string(this->book[i].getlast());
        std::cout << "|";
        ft_print_string(this->book[i].getnick());
        std::cout << "|" << std::endl;
        i++;
    }
    std::cout << "|---------|----------|----------|----------|" << std::endl;
}

void PhoneBook::printcont(int i) const {
    if (i > this->_i)
        return ;
    std::cout << "Index: " << this->book[i].getind() << std::endl;
    std::cout << "Firstname: " << this->book[i].getfirst() << std::endl;
    std::cout << "Lastname: " << this->book[i].getlast() << std::endl;
    std::cout << "Nickname: " << this->book[i].getnick() << std::endl;
}

int PhoneBook::getI(void) const {
    return (this->_i);
}