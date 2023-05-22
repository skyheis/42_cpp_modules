/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:11:17 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 17:34:29 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class AAnimal {

public:

	AAnimal(void);
	AAnimal(AAnimal const &src);
	virtual ~AAnimal(void);

	AAnimal &operator=(AAnimal const &rhs);

	std::string getType(void) const;

	virtual void makeSound(void) const = 0;

protected:

	std::string _type;

};
