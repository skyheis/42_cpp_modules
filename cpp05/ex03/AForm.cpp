/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:51:24 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/16 09:30:22 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("Defy"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

AForm::AForm(std::string name, int gradeSign, int gradeExecute) : _name(name), _signed(false) , _gradeToSign(gradeSign), _gradeToExecute(gradeExecute){
	if (gradeSign > 150 || gradeExecute > 150)
		throw AForm::GradeTooLowException();
	else if (gradeSign < 1 || gradeExecute < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(AForm const &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {
	*this = src;
}

AForm::~AForm(void) {
	std::cout << "AForm destructor called" << std::endl;
}

const AForm &AForm::operator=(AForm const &rhs) {
	this->_signed = rhs.getSigned();
	return (*this);	
}


std::string AForm::getName(void) const {
	return (this->_name);
}

bool	AForm::getSigned(void) const {
	return (this->_signed);
}

int		AForm::getGradeToSign(void) const {
	return (this->_gradeToSign);
}

int		AForm::getGradeToExecute(void) const {
	return (this->_gradeToExecute);
}

void	AForm::beSigned(Bureaucrat const &bure) {
	if (bure.getGrade() > this->_gradeToSign || this->getSigned())
		throw AForm::GradeTooHighException();
	else
		this->_signed = true;
}

void	AForm::isExecutable(Bureaucrat const &bure) {
	if (!this->getSigned())
		throw AForm::NotSignedException();
	else if (bure.getGrade() > this->_gradeToExecute)
		throw AForm::GradeTooLowException();
}

// void	AForm::beExecuted(Bureaucrat const &executor) const {
// 	if (executor.getGrade() > this->_gradeToExecute || !this->getSigned())
// 		throw AForm::GradeTooLowException();
// 	else
// 		this->action();
// }

std::ostream &operator<<(std::ostream &out, const AForm &rhs) {
	out << "AForm " << rhs.getName() << " informations:"
		<< "\n   signed: " << (rhs.getSigned() ? "true" : "false")
		<< "\n   grade to sign: " << rhs.getGradeToSign()
		<< "\n   grade to execute: " << rhs.getGradeToExecute();
	return (out);
}
