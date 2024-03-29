/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:42:02 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/16 09:33:27 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/* ShrubberyCreationForm */
/* int	main(void){
	Bureaucrat	dodi("Foo", 140);
	ShrubberyCreationForm f20("Qui");
	dodi.signForm(f20);
	dodi.executeForm(f20);
	std::cout << std::endl;

	Bureaucrat	aoai("Aoo", 150);
	ShrubberyCreationForm g20("Quo");
	aoai.signForm(g20);
	aoai.executeForm(g20);
	std::cout << std::endl;

	Bureaucrat	sosi("Doo", 100);
	ShrubberyCreationForm h20("Qua");
	sosi.signForm(h20);
	sosi.executeForm(h20);
	std::cout << std::endl;

	std::cout << std::endl << std::endl;
} */

/* test PresidentialPardonForm */
/* int	main(void){
	Bureaucrat	dodi("Foo", 20);
	PresidentialPardonForm f20("Qui");
	dodi.signForm(f20);
	dodi.executeForm(f20);
	std::cout << std::endl;

	Bureaucrat	aoai("Aoo", 30);
	PresidentialPardonForm g20("Quo");
	aoai.signForm(g20);
	aoai.executeForm(g20);
	std::cout << std::endl;

	Bureaucrat	sosi("Doo", 1);
	PresidentialPardonForm h20("Qua");
	sosi.signForm(h20);
	sosi.executeForm(h20);
	std::cout << std::endl;

	std::cout << std::endl << std::endl;
} */

/* test RobotomyRequestForm */
/* int	main(void){
	Bureaucrat	dodi("Foo", 60);
	RobotomyRequestForm f20("Qui");
	dodi.signForm(f20);
	dodi.executeForm(f20);
	std::cout << std::endl;

	Bureaucrat	aoai("Aoo", 80);
	RobotomyRequestForm g20("Quo");
	aoai.signForm(g20);
	aoai.executeForm(g20);
	std::cout << std::endl;

	Bureaucrat	sosi("Doo", 40);
	RobotomyRequestForm h20("Qua");
	sosi.signForm(h20);
	sosi.executeForm(h20);
	std::cout << std::endl;

	std::cout << std::endl << std::endl;
} */

/* test uno */
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
