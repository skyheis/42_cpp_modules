/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:13:55 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/19 12:11:04 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	const Point a;
	const Point b(10, 0);
	const Point c(0, 10);
	const Point point(1, 1);

	std::cout << "----- test one -----" << std::endl;
	if (bsp(a, b, c, point) == true)
		std::cout << "\t\033[32mTrue\033[0m" << std::endl;
	else
		std::cout << "\t\033[31mFalse\033[0m" << std::endl;

	std::cout << "----- test two -----" << std::endl;
	Point e(-1.5, -1.5);
	Point f(2.5, 2.5);
	Point g(-1, -2);
	Point pp(8.5, -9);

	if (bsp(e, f, g, pp) == true)
		std::cout << "\t\033[32mTrue\033[0m" << std::endl;
	else
		std::cout << "\t\033[31mFalse\033[0m" << std::endl;
	std::cout << "--------------------" << std::endl;
}
