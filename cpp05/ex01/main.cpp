/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:42:02 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/15 16:17:00 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void){
	Bureaucrat	loli("gino", 10);
	Form		defy;
	Form		b20("b20", 5, 5);
	try {
		Form		c20("c20", 151, 1);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Form		d20("c20", 150, 0);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	loli.signForm(b20);
	std::cout << b20 << std::endl;
	loli.upGrade(5);
	loli.signForm(b20);
	std::cout << b20 << std::endl;
	std::cout << loli << std::endl;
	loli.signForm(b20);
	std::cout << b20 << std::endl;
}
