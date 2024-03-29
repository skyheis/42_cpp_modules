/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:12:33 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/23 11:50:05 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ICharacter.class.hpp"

class ICharacter;

class AMateria {

public:

	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const &src);
	virtual ~AMateria(void);

	AMateria &operator=(AMateria const &rhs);
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

protected:

	std::string	_type;

};

