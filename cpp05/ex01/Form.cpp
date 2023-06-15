/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:51:24 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/15 16:12:52 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Defy"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(std::string name, int gradeSign, int gradeExecute) : _name(name), _signed(false) , _gradeToSign(gradeSign), _gradeToExecute(gradeExecute){
	if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
	else if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form const &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {
	*this = src;
}

Form::~Form(void) {
	std::cout << "Form destructur called" << std::endl;
}

const Form &Form::operator=(Form const &rhs) {
	this->_signed = rhs.getSigned();
	return (*this);	
}


std::string Form::getName(void) const {
	return (this->_name);
}

bool	Form::getSigned(void) const {
	return (this->_signed);
}

int		Form::getGradeToSign(void) const {
	return (this->_gradeToSign);
}

int		Form::getGradeToExecute(void) const {
	return (this->_gradeToExecute);
}


void	Form::beSigned(Bureaucrat const &bure) {
	if (bure.getGrade() > this->_gradeToSign || this->getSigned())
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, const Form &rhs) {
	out << "Form " << rhs.getName() << " informations:"
		<< "\n   signed: " << (rhs.getSigned() ? "true" : "false")
		<< "\n   grade to sign: " << rhs.getGradeToSign()
		<< "\n   grade to execute: " << rhs.getGradeToExecute();
	return (out);
}
