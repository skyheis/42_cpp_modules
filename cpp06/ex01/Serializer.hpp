/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 13:40:21 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/17 15:34:48 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stdint.h>

typedef struct	Data {
	std::string loli;
	int			popi;
} Data;

class Serializer {

public:

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

private:

	Serializer(void);
	Serializer(Serializer const & src);
	~Serializer(void);
	Serializer & operator=(Serializer const & rhs);

};

/* L'operatore reinterpret_cast consente di convertire un puntatore o un riferimento
 di un tipo in un puntatore o un riferimento di un tipo completamente diverso.
 Non esegue alcun controllo o adattamento del tipo a tempo di compilazione o a tempo
 di esecuzione. Questo significa che il comportamento del reinterpret_cast dipende
 dalla specifica implementazione e dalla compatibilità dei tipi coinvolti.
 */
