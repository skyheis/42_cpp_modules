/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:09:01 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/16 17:22:04 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>
# include <string>

class Harl {

public:

    Harl(void);
    ~Harl(void);

    void complain(std::string level);

private:

void debug(void);
void info(void);
void warning(void);
void error(void);

};

typedef void (Harl::*mem_fun)(void);

#endif /* HARL_HPP */