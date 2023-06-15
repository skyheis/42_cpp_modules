/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 08:44:01 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/15 16:04:02 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAFT_HPP
# define BUREAUCRAFT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {

public:

	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat(void);

	Bureaucrat &operator=(Bureaucrat const &rhs);

	std::string getName(void) const;
	int			getGrade(void) const;

	void		upGrade(int i);
	void		downGrade(int i);
	void		signForm(Form &frm);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Grade is too high, daaa");
		}
	};

	class GradeTooLowException : public std::exception {
		virtual const char *what() const throw() {
			return ("Grade is too low, daaa");
		}		
	};

private:

	std::string _name;
	int			_grade;

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs);
#endif /* BUREAUCRAFT_HPP */

