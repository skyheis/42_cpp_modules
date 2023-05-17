/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:53:46 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/17 19:21:46 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public:

    Fixed(void);                        // canon constr void
    Fixed(int const n);
    Fixed(float const f);
    Fixed(Fixed const &src);            // canon constr copy
    ~Fixed(void);                       // canon deconstr

    Fixed& operator=(Fixed const &rhs); // canon operator=

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    int operator>(Fixed const &rhs) const;
    int operator<(Fixed const &rhs) const;
    int operator>=(Fixed const &rhs) const;
    int operator<=(Fixed const &rhs) const;
    int operator==(Fixed const &rhs) const;
    int operator!=(Fixed const &rhs) const;

    Fixed operator+( Fixed const & rhs) const;
    Fixed operator-( Fixed const & rhs) const;
    Fixed operator*( Fixed const & rhs) const;
    Fixed operator/( Fixed const & rhs) const;

    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);
    
    static const Fixed &min(Fixed const &a, Fixed const &b);
    static const Fixed &max(Fixed const &a, Fixed const &b);
    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);

private:

    int                 _nb;
    static const int    _fbits = 8;

};

std::ostream& operator<<( std::ostream & o, Fixed const & i );

#endif /* FIXED_HPP */
