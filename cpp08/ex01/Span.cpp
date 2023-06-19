/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:40:28 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/19 19:45:23 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(10000), _stack() {
	// this->_stack.begin();
}

Span::Span(int size) : _size(size), _stack() {
	// this->_stack.begin();
}

Span::Span(Span const &src) {
	*this = src;
}

Span::~Span(void) {}

Span& Span::operator=(Span const &rhs) {
	this->_size = rhs._size;
	this->_stack = rhs._stack;
	return (*this);
}

void Span::addNumber(int i) {
	if (this->_stack.size() == this->_size)
		throw Span::FullException();
	else if (this->_stack.size()
		&& (find(this->_stack.begin(), this->_stack.end(), i) != this->_stack.end()
		|| *(this->_stack.end()) == i))
		throw Span::AlreadyPresentException();
	this->_stack.push_back(i);
}

int Span::shortestSpan(void) {
	if (!this->_stack.size())
		throw Span::EmptyException();
	else if (this->_stack.size() == 1)
		throw Span::SoloException();
	std::sort(this->_stack.begin(), this->_stack.end());
	
	unsigned int	min = std::numeric_limits<unsigned int>::max();
	
	for (long unsigned int f = 0; f + 1 < this->_stack.size(); f++) {
		for (long unsigned int s = f + 1; s < this->_stack.size(); s++) {
			if (abs(this->_stack[s] - this->_stack[f]) < min)
				min = abs(this->_stack[s] - this->_stack[f]);
		}
	}
	return (min);
}

int Span::longestSpan(void) {
	if (!this->_stack.size())
		throw Span::EmptyException();
	else if (this->_stack.size() == 1)
		throw Span::SoloException();
	std::sort(this->_stack.begin(), this->_stack.end());
	
	int	max = 0;
	// vector::iterator f = this->_stack.begin();
	// vector::iterator s = this->_stack.begin() + 1;
	for (long unsigned int f = 0; f + 1 < this->_stack.size(); f++) {
		for (long unsigned int s = f + 1; s < this->_stack.size(); s++) {
			if (abs(this->_stack[s] - this->_stack[f]) > max)
				max = abs(this->_stack[s] - this->_stack[f]);
		}
	}
	return (max);
}

