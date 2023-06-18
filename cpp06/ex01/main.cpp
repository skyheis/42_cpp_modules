/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 13:59:04 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/17 14:14:36 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void) {
	Data data1;
	data1.loli = "salve";
	data1.popi = 42;

	Data *dataptr;
	uintptr_t intptr;

	std::cout << "data1: " << data1.loli << " & " << data1.popi << std::endl << std::endl;

	intptr = Serializer::serialize(&data1);
	std::cout << "serialize &data1 in intptr" << std::endl;
	std::cout << "data1: " << data1.loli << " & " << data1.popi << std::endl << std::endl;

	std::cout << "now dataptr get info from deserialize intptr..." << std::endl;
	dataptr = Serializer::deserialize(intptr);
	std::cout << "data1:   " << data1.loli << " & " << data1.popi << std::endl;
	std::cout << "dataptr: " << dataptr->loli << " & " << dataptr->popi << std::endl;

}
