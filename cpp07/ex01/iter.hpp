/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:32:45 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/18 18:34:49 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
void	iter(T *arr, size_t len, void (*f)(T const &)) {
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void	dosomething(T const &x) {
	std::cout << x << std::endl;
}
