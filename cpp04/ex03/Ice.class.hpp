/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 22:31:26 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 22:34:22 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.class.hpp"

class Ice : public AMateria {

public:

	Ice(void);
	Ice(std::string const & type);
	Ice(Ice const &src);
	~Ice(void);

	Ice &operator=(Ice const &rhs);
	
	AMateria* clone() const;
	void use(ICharacter& target);

}
