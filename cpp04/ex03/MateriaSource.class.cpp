/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:46:43 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/23 12:15:03 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		this->_book[i] = NULL;
	std::cout << "MateriaSource constructor default name called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_book[i])
			delete this->_book[i];
	}
	std::cout << "Character destructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
	for (int i = 0; i < 4; i++)
		this->_book[i] = rhs._book[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
	int i = 0;
	
	while (this->_book[i] && i < 4)
		i++;
	if (i == 4)
	{
		delete _book[0];
		_book[0] = m;
	}
	else
		_book[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i = 0;
	while (this->_book[i] && i < 4)
	{
		if (this->_book[i]->getType() == type)
			break ;
		i++;
	}
	if (i == 4  || !this->_book[i])
		return (NULL);
	else
		return (this->_book[i]->clone());
}
