/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:53:46 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/17 11:55:18 by ggiannit         ###   ########.fr       */
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

private:

    int                 _nb;
    static const int    _fbits = 8;

};

std::ostream& operator<<( std::ostream & o, Fixed const & i );

#endif /* FIXED_HPP */
