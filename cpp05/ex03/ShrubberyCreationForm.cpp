/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:44:52 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/15 18:39:26 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), _target("default") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	this->_target = rhs._target;
	return (*this);
}

static void	writeTree(std::ostream &file)
{
	file << "              ,@@@@@@@," << std::endl;
	file << "      ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	file << "   ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	file << "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	file << "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	file << "  %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	file << "  `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	file << "      |o|        | |         | |" << std::endl;
	file << "      |.|        | |         | |" << std::endl;
	file << "   \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &bure) const {	
	if (!this->getSigned())
		throw AForm::NotSignedException();
	else if (bure.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooHighException();
	else {
		std::string filename = this->_target + "_shrubbery";
		std::ofstream file(filename.c_str(), std::ios::out | std::ios::trunc);
		
		if (file.is_open()) {
			writeTree(file);
			file.close();
		}
		else
			std::cerr << "Error opening file" << std::endl;
	}
}


//                ,@@@@@@@,
//        ,,,.   ,@@@@@@/@@,  .oo8888o.
//     ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o
//    ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'
//    %&&%&%&/%&&%@@\@@/ /@@@88888\88888'
//    %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'
//    `&%\ ` /%&'    |.|        \ '|8'
//        |o|        | |         | |
//        |.|        | |         | |
//     \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_
