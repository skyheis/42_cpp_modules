/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 08:44:01 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/15 12:01:54 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

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

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs);
