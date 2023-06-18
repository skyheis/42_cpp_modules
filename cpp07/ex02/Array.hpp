/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:50:08 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/18 20:52:57 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array {

public:
	Array(void) : _arr(NULL), _len(0) {}
	Array(unsigned int n) : _arr(new T[n]), _len(n) {}
	Array(Array<T> const &src) {
		src._len ? _arr = new T[src._len] : _arr = NULL;
		_len = src._len;
	}
	virtual ~Array(void) {
		delete [] _arr;
	}

	Array	&operator=(Array<T> const &src) {
		if (this != &src) {
			delete [] _arr;
			_arr = new T[src._len];
			_len = src._len;
			for (size_t i = 0; i < _len; i++)
				_arr[i] = src._arr[i];
		}
		return (*this);
	}

	T	&operator[](size_t i) {
		if (i >= _len || !_arr)
			throw OutOfArrayException();
		return (_arr[i]);
	}

	size_t	size(void) const {
		return (_len);
	}

	class OutOfArrayException : public std::exception {
		virtual const char *what() const throw() {
			return ("The index is out of the array");
		}
	};

private:
	T		*_arr;
	size_t	_len;

};

// template <typename T>
// std::ostream	&operator<<(std::ostream &out, Array<T> const &src) {
// 	out << "[ ";
// 	for (size_t i = 0; i < src.size(); i++)
// 		out << src[i] << " ";
// 	out << "]";
// 	return (out);
// }

#endif
