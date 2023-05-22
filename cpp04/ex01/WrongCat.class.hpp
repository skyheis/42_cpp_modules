/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:11:17 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 15:52:45 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat(void);
	WrongCat(WrongCat const &src);
	~WrongCat(void);

	WrongCat &operator=(WrongCat const &rhs);

};
