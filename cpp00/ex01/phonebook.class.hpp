/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:32:02 by ggiannit          #+#    #+#             */
/*   Updated: 2023/05/15 16:07:25 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class   PhoneBook {

public:
 
    PhoneBook(void);
    ~PhoneBook(void);

    void        addcontact(void);
    void        search(void) const;
    void        printcont(int i) const;
    int         getI(void) const;

private:

    Contact book[8];
    static int  _i;

};

#endif /* PHONEBOOK_CLASS_HPP */