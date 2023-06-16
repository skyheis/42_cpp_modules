/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:39:15 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/16 10:33:53 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

public:

	AForm(void);
	AForm(std::string name, int gradeSign, int gradeExecute);
	AForm(AForm const &src);
	virtual ~AForm(void);

	const AForm &operator=(AForm const &rhs);

	std::string getName(void) const;
	bool		getSigned(void) const;
	int			getGradeToSign(void) const;
	int			getGradeToExecute(void) const;

	void		beSigned(Bureaucrat const &bure);
	void		isExecutable(Bureaucrat const &bure);

	virtual void	execute(Bureaucrat const &executor) const = 0;

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

	class NotSignedException : public std::exception {
		virtual const char *what() const throw() {
			return ("Form is not signed");
		}		
	};

private:

	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExecute;
};

std::ostream &operator<<(std::ostream &out, const AForm &rhs);

#endif /* FORM_HPP*/
