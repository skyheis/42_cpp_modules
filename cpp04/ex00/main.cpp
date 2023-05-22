/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:17:39 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 16:02:11 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "WrongCat.class.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* loli = new Dog();
	const Animal* koki = new Cat();
	const WrongAnimal* popi = new WrongCat();
	const Animal sosi;
	const Dog toti;
	
	std::cout << "loli is a " << loli->getType() << std::endl;
	std::cout << "koki is a " << koki->getType() << std::endl;
	std::cout << "sosi is a " << sosi.getType() << std::endl;
	std::cout << "toti is a " << toti.getType() << std::endl;
	std::cout << "meta is a " << meta->getType() << std::endl;
	std::cout << "popi is a " << popi->getType() << std::endl;
	koki->makeSound(); //will output the cat sound!
	loli->makeSound();
	sosi.makeSound();
	toti.makeSound();
	meta->makeSound();
	popi->makeSound();
	delete meta;
	delete loli;
	delete koki;
	return 0;
}
