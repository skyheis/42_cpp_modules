/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:11:07 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/20 16:12:55 by ggiannit         ###   ########.fr       */
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
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}


	//range test
	Span	sr(100000);

	try {
		sr.addBigSize(10000);
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;		
	}
	
	std::cout << "Test with random range" << std::endl;
	
	try {
		std::cout << "Shortest span: " << sr.shortestSpan() << std::endl;
		std::cout << "Longest span:  " << sr.longestSpan() << std::endl;
	}
	catch (std::exception &ex){
		std::cout << ex.what() << std::endl;
	}

	//short range test
	Span	ssr(100);

	try {
		ssr.addBigSize(50, 100);
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;		
	}
	
	std::cout << "Test with a short random range" << std::endl;
	
	try {
		std::cout << "Shortest span: " << ssr.shortestSpan() << std::endl;
		std::cout << "Longest span:  " << ssr.longestSpan() << std::endl;
	}
	catch (std::exception &ex){
		std::cout << ex.what() << std::endl;
	}
}
