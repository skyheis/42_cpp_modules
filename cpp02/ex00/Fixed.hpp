/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:53:46 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/17 10:43:54 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

public:

    Fixed(void);                        // canon constr void
    Fixed(Fixed const &src);            // canon constr copy
    ~Fixed(void);                       // canon deconstr

    Fixed& operator=(Fixed const &rhs); // canon operator=

    int getRawBits( void ) const;
    void setRawBits( int const raw );

private:

    int                 _nb;
    static const int    _fbits = 8;

};

#endif /* FIXED_HPP */
