/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:43:29 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/23 11:34:48 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.class.hpp"

class MateriaSource : public IMateriaSource {

public:

	MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	~MateriaSource(void);

	MateriaSource &operator=(MateriaSource const &rhs);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);

private:

	AMateria *_book[4];

};
