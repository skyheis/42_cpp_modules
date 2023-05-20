/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:01:22 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/19 12:08:38 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _nb(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _nb(n << this->_fbits) {
    // std::cout << "Inte constructor called" << std::endl;
}

Fixed::Fixed(float const f) {
    // std::cout << "Float constructor called" << std::endl;
    this->_nb = roundf(f * (1 << this->_fbits));
}

Fixed::Fixed(Fixed const &src) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void) {
    // std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &rhs) {
    // std::cout << "Copy assignment operator called" << std::endl;
    this->_nb = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const {
    return (this->_nb);
}

void Fixed::setRawBits( int const raw ) {
    this->_nb = raw;
}

float Fixed::toFloat(void) const {
    return ((static_cast<float>(this->getRawBits()) / (1 << this->_fbits)));
}

int Fixed::toInt(void) const {
    return (this->_nb >> this->_fbits);
}

/*      operators: > < >= <= == !=         */

int Fixed::operator>(Fixed const &rhs) const {
    if (this->getRawBits() > rhs.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator<(Fixed const &rhs) const {
    if (this->getRawBits() < rhs.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator>=(Fixed const &rhs) const {
    if (this->getRawBits() >= rhs.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator<=(Fixed const &rhs) const {
    if (this->getRawBits() <= rhs.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator==(Fixed const &rhs) const {
    if (this->getRawBits() == rhs.getRawBits())
        return (1);
    return (0);
}

int Fixed::operator!=(Fixed const &rhs) const {
    if (this->getRawBits() != rhs.getRawBits())
        return (1);
    return (0);
}

/*      operators: + - * /        */

Fixed Fixed::operator+( Fixed const &rhs) const {
    Fixed eql(this->toFloat() + rhs.toFloat());

    return (eql);
}
Fixed Fixed::operator-( Fixed const &rhs) const {
    Fixed eql(this->toFloat() - rhs.toFloat());

    return (eql);
}
Fixed Fixed::operator*( Fixed const &rhs) const {
    Fixed eql(this->toFloat() * rhs.toFloat());

    return (eql);
}
Fixed Fixed::operator/( Fixed const &rhs) const {
    Fixed eql(this->toFloat() / rhs.toFloat());

    return (eql);
}

/*      operators: i++ i-- ++i --i        */

Fixed &Fixed::operator++(void) {
    this->_nb++;
    return (*this);
}

Fixed &Fixed::operator--(void) {
    this->_nb--;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed nw = *this;

    this->_nb++;
    return (nw);
}

Fixed Fixed::operator--(int) {
    Fixed nw = *this;

    this->_nb--;
    return (nw);
}

/*      max min       */

const Fixed &Fixed::min(Fixed const &a, Fixed const &b) {
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b) {
    if (a > b)
        return (a);
    return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a > b)
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return (a);
    return (b);
}


std::ostream& operator<<( std::ostream & out, Fixed const& fixed ) {
    out << fixed.toFloat();
    return (out);
}
