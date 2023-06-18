/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:58:51 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/18 20:38:27 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <ctime>
#include <cstdlib>

#define MAX_VAL 750

int main(int, char**)
{
	int * a = new int();
	std::cout << *a << std::endl;
	delete a;

	Array<int> popi(0);
	std::cout << popi.size() << std::endl;
	// return (0);

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

	// std::cout << *mirror << std::endl; //not init!
	std::cout << numbers.size() << std::endl;

    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }


    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	delete [] mirror;//
    
	Array<int> tmp[3];
	for (int i = 0; i < 3; i++)
		tmp[i] = i;

	std::cout << tmp << std::endl;

	return 0;
}
