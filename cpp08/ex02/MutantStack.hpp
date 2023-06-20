/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:37:38 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/20 19:27:20 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

public:

	MutantStack(void) : std::stack<T>() {};
	MutantStack(MutantStack const & src) : std::stack<T>(src) {};
	virtual ~MutantStack(void) {};
	
	MutantStack & operator=(MutantStack const & rhs) {
		if (this != &rhs)
			std::stack<T>::operator=(rhs);
		return *this;
	};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(void) {
		return std::stack<T>::c.begin();
	};
	iterator end(void) {
		return std::stack<T>::c.end();
	};
};
