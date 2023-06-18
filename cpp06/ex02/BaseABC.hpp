/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseABC.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:17:41 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/17 14:54:16 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <sys/time.h>

class Base {
public:
	virtual ~Base(void);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

/* Cast dinamico (dynamic_cast): Il cast dinamico viene utilizzato per eseguire 
 il controllo del tipo a tempo di esecuzione e il cast nelle gerarchie di classi
 polimorfiche. Consente di convertire in modo sicuro puntatori o riferimenti di
 una classe base in puntatori o riferimenti di una classe derivata. Se la
 conversione non è valida, dynamic_cast restituisce un puntatore nullo per 
 le conversioni di puntatori o genera un'eccezione std::bad_cast per le conversioni
 di riferimento. */
