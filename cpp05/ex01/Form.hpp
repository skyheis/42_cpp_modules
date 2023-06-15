/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:39:15 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/15 16:17:16 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:

	Form(void);
	Form(std::string name, int gradeSign, int gradeExecute);
	Form(Form const &src);
	~Form(void);

	const Form &operator=(Form const &rhs);

	std::string getName(void) const;
	bool		getSigned(void) const;
	int			getGradeToSign(void) const;
	int			getGradeToExecute(void) const;

	void		beSigned(Bureaucrat const &bure);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Form grade is too high");
		}
	};

	class GradeTooLowException : public std::exception {
		virtual const char *what() const throw() {
			return ("Form grade is too low");
		}		
	};

private:

	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExecute;
};

std::ostream &operator<<(std::ostream &out, const Form &rhs);

#endif /* FORM_HPP*/
