/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:31:56 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/15 16:05:29 by ggiannit         ###   ########.fr       */
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
    int         getind(void) const;
    std::string getfirst(void) const;
    std::string getlast(void) const;
    std::string getnick(void) const;

private:

    int         _index;
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
};

#endif /* CONTACT_CLASS_HPP */