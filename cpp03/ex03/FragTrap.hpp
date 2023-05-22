/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:18:49 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/22 09:21:47 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
	
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap(void);

	FragTrap& operator=(FragTrap const &rhs);

	void	attack(const std::string& target);
	void	highFivesGuys(void);

};

#endif /* FRAGTRAP_H */
