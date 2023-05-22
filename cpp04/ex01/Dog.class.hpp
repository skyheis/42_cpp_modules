/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:11:17 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 16:28:33 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.class.hpp"
#include "Brain.class.hpp"

class Dog : public Animal {

public:

	Dog(void);
	Dog(Dog const &src);
	~Dog(void);

	Dog &operator=(Dog const &rhs);

	virtual void makeSound(void) const;

private:

	Brain *_brain;

};
