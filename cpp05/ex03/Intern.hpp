/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:39:57 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/16 10:45:35 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:

	Intern(void);
	Intern(Intern const & src);
	~Intern(void);

	Intern & operator=(Intern const & rhs);

	AForm *makeForm(std::string const &formName, std::string const &target);

private:

	AForm *_newShrubbery(std::string const &target);
	AForm *_newRobotomy(std::string const &target);
	AForm *_newPresidential(std::string const &target);
};

typedef AForm *(Intern::*formType)(std::string const &target);
