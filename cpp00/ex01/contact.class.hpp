/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:31:56 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/19 10:58:36 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact {

public:

    Contact(void);
    ~Contact(void);

    void        init(int i);
    int         getInd(void) const;
    std::string getFirst(void) const;
    std::string getLast(void) const;
    std::string getNick(void) const;

private:

    int         _index;
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
};

#endif /* CONTACT_CLASS_HPP */
