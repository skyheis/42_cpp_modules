/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:01:22 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/17 10:20:40 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _nb(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_nb = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_nb);
}

void Fixed::setRawBits( int const raw ) {
    this->_nb = raw;
}