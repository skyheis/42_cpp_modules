/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 22:35:02 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 22:35:21 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.class.hpp"

class Cure : public AMateria {

public:

	Cure(void);
	Cure(std::string const & type);
	Cure(Cure const &src);
	~Cure(void);

	Cure &operator=(Cure const &rhs);
	
	AMateria* clone() const;
	void use(ICharacter& target);

}
