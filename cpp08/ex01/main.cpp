/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:11:07 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/19 19:55:46 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void){
	Span	s1(5);
	Span	s2;
	
	///////////// ERRORS //////////////////////////////
	try {
		s1.shortestSpan();
	}
	catch (std::exception &ex){
		std::cout << ex.what() << std::endl;
	}
	try {
		s1.longestSpan();
	}
	catch (std::exception &ex){
		std::cout << ex.what() << std::endl;
	}
	try {
		s1.addNumber(6);
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
		try {
		s1.addNumber(6);
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		s1.shortestSpan();
	}
	catch (std::exception &ex){
		std::cout << ex.what() << std::endl;
	}
	try {
		s1.longestSpan();
	}
	catch (std::exception &ex){
		std::cout << ex.what() << std::endl;
	}
	/////////////////////////////////////////////////////
	
	try {
		s1.addNumber(3);
		s1.addNumber(17);
		s1.addNumber(9);
		s1.addNumber(11);

		std::cout << "Short span: " << s1.shortestSpan() << std::endl;
		std::cout << "Long span:  " << s1.longestSpan() << std::endl;
	}
	catch (std::exception &ex){
		std::cout << ex.what() << std::endl;
	}
	try {
		s1.addNumber(0);
	}
	catch (std::exception &ex){
		std::cout << ex.what() << std::endl;
	}
}
