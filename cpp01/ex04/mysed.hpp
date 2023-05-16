/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mysed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:19:08 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/16 15:22:27 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYSED_H
# define MYSED_H

# include <iostream>
# include <fstream>
# include <string>
# include <stdlib.h>

void    ft_chech_args(int ac);
void    ft_chech_file(std::ifstream &inf);

#endif /* MYSED_H */