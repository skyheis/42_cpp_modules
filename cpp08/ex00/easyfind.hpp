/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:40:56 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/19 18:58:47 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

template <typename T>
typename T::iterator easyfind(T &arr, int i)
{
	typename T::iterator x = std::find(arr.begin(), arr.end(), i);
	if ( x == arr.end() && *x != i)
		throw std::exception();
	return (x);
	// for (long unsigned int x = 0; x < arr.size(); x++) {
	// 	if (i == arr[x])
	// 		return (x);
	// }
}

template <typename T>
void	print(T &arr) {
	typename T::iterator it;
	for (it = arr.begin(); it != arr.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
