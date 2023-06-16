/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:39:31 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/16 10:44:57 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	
}

Intern::Intern(Intern const & src) {
	*this = src;
}

Intern::~Intern(void) {
	std::cout << "Intern destructor called" << std::endl;
}

Intern &Intern::operator=(Intern const & rhs) {
	(void)rhs;
	return (*this);
}

AForm *Intern::_newShrubbery(std::string const &target) {
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::_newRobotomy(std::string const &target) {
	return (new RobotomyRequestForm(target));
}

AForm *Intern::_newPresidential(std::string const &target) {
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string const &formName, std::string const &target) {
	std::string reqType[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	formType forms[3] = {&Intern::_newPresidential, &Intern::_newRobotomy, &Intern::_newShrubbery};
	
	for (int i = 0; i < 3; i++) {
		if (formName == reqType[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*forms[i])(target));
		}
	}

	std::cout << "Intern can't create " << formName << std::endl;
	return (NULL);
}
