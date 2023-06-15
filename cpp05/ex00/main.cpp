/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:42:02 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/15 12:22:30 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void){
	Bureaucrat loli("gino", 10);
	Bureaucrat popi = loli;
	Bureaucrat koki;
	Bureaucrat hohi(popi);

	try
	{
		Bureaucrat toti("alpi", 200);
	}
	catch(const std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}

	loli.upGrade(2);
	hohi.downGrade(5);
	std::cout << loli << std::endl;
	std::cout << popi << std::endl;
	std::cout << koki << std::endl;
	std::cout << hohi << std::endl;

	try
	{
		loli.downGrade(100);
		std::cout << loli << std::endl;
		popi.upGrade(1);
		std::cout << popi << std::endl;
		koki.downGrade(0);
		std::cout << koki << std::endl;
		hohi.upGrade(5);
		std::cout << hohi << std::endl;
	}
	catch(const std::exception& ex)
	{
		std::cerr << ex.what() << std::endl;
	}

}
