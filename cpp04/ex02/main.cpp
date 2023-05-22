/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:17:39 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 17:40:13 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "WrongCat.class.hpp"

int	main(void)
{
	const Dog dodi;

	dodi.makeSound();

	Dog qoqi(dodi);

	dodi.makeSound();

	// const AAnimal* meta = new AAnimal(); no more becuase is abstract now
	const AAnimal* loli = new Dog();
	const AAnimal* koki = new Cat();
	const WrongAnimal* popi = new WrongCat();
	//const AAnimal sosi; no more becuase is abstract now
	const Dog toti;
	
	std::cout << "loli is a " << loli->getType() << std::endl;
	std::cout << "koki is a " << koki->getType() << std::endl;
	std::cout << "toti is a " << toti.getType() << std::endl;
	std::cout << "popi is a " << popi->getType() << std::endl;
	koki->makeSound(); //will output the cat sound!
	loli->makeSound();
	toti.makeSound();
	popi->makeSound();
	delete loli;
	delete koki;
	delete popi;
	return 0;
}
