/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:31:54 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/23 19:55:46 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>

void	ft_rpn(char *s);

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
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin(void) {
		return std::stack<T>::c.begin();
	};
	iterator end(void) {
		return std::stack<T>::c.end();
	};

	const_iterator begin(void) const {
		return std::stack<T>::c.begin();
	};
	const_iterator end(void) const {
		return std::stack<T>::c.end();
	};
};

// case 5 1 - 3 *
// 1. Push 5 into the stack. This is the first value.
// 2. Push 1 into the stack. This is the second value and is on the position above the 5.
// 3. Apply the subtraction operation by taking two operands from the stack (1 and 5). The top value (1) is subtracted from the value below it (5), and the result (4) is stored back to the stack. 4 is now the only value in the stack and is in the bottom.
// 4. Push 3 into the stack. This value is in the position above 4 in the stack.
// 5. Apply the multiplication operation by taking the last two numbers off the stack and multiplying them. The result is then placed back into the stack. After this operation, the stack now only contains the number 12.

