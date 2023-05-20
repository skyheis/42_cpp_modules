/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:14:49 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/19 11:58:50 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

public:

    Point(void);                            // canon constr void
    Point(float const a, float const b);
    // Point(Fixed const a, Fixed const b);
    Point(Point const &src);                // canon constr copy
    ~Point(void);                           // canon deconstr

    Point& operator=(Point const &rhs);      // canon operator=

    Fixed getX(void) const;
    Fixed getY(void) const;

private:
    
    Fixed const _x;
    Fixed const _y;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif /* POINT_HPP */
