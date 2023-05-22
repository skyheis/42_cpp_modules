/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:11:17 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 13:38:12 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.class.hpp"

class Cat : public Animal {

public:

	Cat(void);
	Cat(Cat const &src);
	~Cat(void);

	Cat &operator=(Cat const &rhs);

	virtual void makeSound(void) const;

};
