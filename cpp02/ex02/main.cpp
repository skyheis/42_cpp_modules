/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:13:55 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/17 18:55:16 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    
    std::cout << Fixed::min( a, b ) << std::endl << std::endl;
    
    std::cout << (a < b) << std::endl;
    std::cout << (a >= b) << std::endl;
    std::cout << (a <= a) << std::endl;
    std::cout << (a == a) << std::endl;
    std::cout << (a != b) << std::endl;
    
    std::cout << Fixed::min( a, b ) << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::max( a, a ) << std::endl;
    
    return 0;
}
