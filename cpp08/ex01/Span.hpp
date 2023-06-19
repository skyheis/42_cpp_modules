/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:07:24 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/19 19:24:29 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
// #include <iomanip>

class Span {

public:
	Span(void);
	Span(int size);
	Span(Span const &src);
	~Span(void);

	Span& operator=(Span const &rhs);

	void addNumber(int i);
	int shortestSpan(void);
	int longestSpan(void);

	class AlreadyPresentException : public std::exception {
		virtual const char *what() const throw() {
			return ("The number is already present!");
		}
	};
	class FullException : public std::exception {
		virtual const char *what() const throw() {
			return ("The class is Full!");
		}
	};
	class EmptyException : public std::exception {
		virtual const char *what() const throw() {
			return ("The class is Empty!");
		}
	};
	class SoloException : public std::exception {
		virtual const char *what() const throw() {
			return ("Only one element in class!");
		}
	};
	
private:
	long unsigned int	_size;
	std::vector<int>	_stack;

};
