/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:42:02 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/15 18:35:27 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void){
	Bureaucrat	loli("Romolo", 140);
	ShrubberyCreationForm a20("home");

	loli.executeForm(a20);
	loli.signForm(a20);
	loli.executeForm(a20);
	loli.upGrade(10);
	loli.signForm(a20);
	loli.executeForm(a20);
	try {
		loli.downGrade(30);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	loli.executeForm(a20);

}
