/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:36:54 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 15:48:41 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal {

public:

	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &src);
	virtual ~WrongAnimal(void);

	WrongAnimal &operator=(WrongAnimal const &rhs);

	std::string getType(void) const;

	void makeSound(void) const;

protected:

	std::string _type;

};
