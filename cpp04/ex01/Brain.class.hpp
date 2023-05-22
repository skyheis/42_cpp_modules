/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:10:29 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 16:15:15 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain {
	
public:

	Brain(void);
	Brain(Brain const &src);
	~Brain(void);

	Brain &operator=(Brain const &rhs);

private:

	std::string ideas[100];
};
