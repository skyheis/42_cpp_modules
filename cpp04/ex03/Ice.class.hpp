/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 22:31:26 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/23 09:36:13 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.class.hpp"

class Ice : public AMateria {

public:

	Ice(void);
	Ice(Ice const &src);
	~Ice(void);

	Ice &operator=(Ice const &rhs);
	
	Ice* clone() const;
	void use(ICharacter& target);

};
