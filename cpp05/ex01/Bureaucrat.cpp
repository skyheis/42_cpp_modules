/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 08:48:13 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/15 16:15:40 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Defy"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
	*this = src;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat destructur called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
	this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

std::string Bureaucrat::getName(void) const {
	return (this->_name);
}
int			Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

void	Bureaucrat::upGrade(int i) {
	if (this->_grade - i < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= i;
}

void	Bureaucrat::downGrade(int i) {
	if (this->_grade + i > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += i;
}

void	Bureaucrat::signForm(Form &frm) {
	try {
		frm.beSigned(*this);
		std::cout << this->_name << " signed " << frm.getName() << std::endl;
	}
	catch (std::exception &e) {
		if (frm.getSigned())
			std::cerr << this->_name << " cannot sign " << frm.getName() << " because it's already signed" << std::endl;
		else
			std::cerr << this->_name << " cannot sign " << frm.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs) {
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (out);
}
