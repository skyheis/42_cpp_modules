/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:00:16 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/17 19:44:49 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {

}

Point::Point(float const a, float const b) : _x(a), _y(b) {

}

// Point::Point(Fixed const a, Fixed const b) : _x(a), _y(b) {}

Point::Point(Point const &src) : _x(src.getX()), _y(src.getY()) {
    
}

Point::~Point(void) {

}

Point& Point::operator=(Point const &rhs) {
    (void)rhs;
    return (*this);
}

Fixed   Point::getX(void) const {
    return (this->_x);
}

Fixed   Point::getY(void) const {
    return (this->_y);
}
