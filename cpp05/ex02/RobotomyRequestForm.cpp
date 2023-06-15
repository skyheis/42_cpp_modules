/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:37:04 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/15 18:51:12 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45), _target("default") {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src) {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	this->_target = rhs._target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &bure) const {	
	if (!this->getSigned())
		throw AForm::NotSignedException();
	else if (bure.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooHighException();
	else {
		std::time_t	currentTime = std::time(NULL);
		int			timeAsInt = static_cast<int>(currentTime);
		
		std::cout << "Brrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr" << std::endl;
		
		if (timeAsInt % 2 == 0)
			std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
		else
			std::cout << this->_target << " has not been robotomized :cc" << std::endl;

	}
}
