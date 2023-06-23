/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:31:58 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/23 19:55:26 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static void	ft_exec_operation(char o, MutantStack<int> &stack) {
	if (stack.size() < 2)
		throw std::exception();

	int	last = stack.top();
	
	stack.pop();
	if (o == '+')
		stack.top() += last;
	else if (o == '-')
		stack.top() -= last;
	else if (o == '*')
		stack.top() *= last;
	else if (o == '/')
		stack.top() /= last;
}

void	ft_rpn(char *s) {
	MutantStack<int> stack;

	while (s && *s == 32)
		s++;

	while (s && *s){
		if (std::isdigit(*s)) {
			stack.push(*s - 48);
			s++;
		}
		else if (*s == '+' || *s == '-' || *s == '*' || *s == '/') {
			ft_exec_operation(*s, stack);
			s++;
		}
		else
			throw std::exception();
		if (*s != 32 && *s != '\0')
			throw std::exception();
		while (*s == 32)
			s++;			
	}
	if (stack.size() == 1)
		std::cout << stack.top() << std::endl;
	else
		throw std::exception();
		
}

