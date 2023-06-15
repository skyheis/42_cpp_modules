/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:42:02 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/15 19:00:29 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void){
	Bureaucrat	loli("Romolo", 140);
	ShrubberyCreationForm a20("home");

	loli.executeForm(a20);
	loli.signForm(a20);
	loli.executeForm(a20);
	loli.upGrade(10);
	loli.signForm(a20);
	loli.executeForm(a20);
	try {
		loli.downGrade(20);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	loli.executeForm(a20);

	Bureaucrat	sosi("Remo", 60);
	RobotomyRequestForm b20("Pony");
	PresidentialPardonForm c20("Sally");

	sosi.signForm(b20);
	sosi.executeForm(b20);
	sosi.signForm(c20);
	sosi.executeForm(b20);
	sosi.upGrade(59);
	sosi.signForm(b20);
	sosi.executeForm(b20);
	sosi.signForm(c20);
	sosi.executeForm(c20);
	


}
