/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:57:50 by ggiannit          #+#    #+#             */
/*   Updated: 2023/06/24 19:03:09 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <limits>
#include <sstream>
#include <cstdlib>
#include <cerrno>
#include <iomanip>
#include <ctime>

class PmergeMe {

public:
	PmergeMe(int ac, char **av) ;
	PmergeMe(PmergeMe const &src);
	~PmergeMe(void);
	
	PmergeMe	&operator=(PmergeMe const &rhs);

	std::vector<unsigned int> &getVec(void);
	std::deque<unsigned int> &getDeq(void);

private:
	std::vector<unsigned int>	_vec;
	std::deque<unsigned int>	_deq;

	PmergeMe(void);
};

bool isUnInt(std::string const &str);

template <typename T>
void insertionSort(T& cont, int left, int right) {
    int				j;
	unsigned int	key;

	for (int i = left + 1; i <= right; i++) {
        key = cont[i];
        for (j = i - 1; j >= left && cont[j] > key; j--)
            cont[j + 1] = cont[j];
        cont[j + 1] = key;
    }
}

template <typename T>
void mergeSort(T& cont, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    T left_half(n1);
    T right_half(n2);

    for (int i = 0; i < n1; i++)
        left_half[i] = cont[left + i];
    for (int j = 0; j < n2; j++)
        right_half[j] = cont[middle + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (left_half[i] <= right_half[j]) {
            cont[k] = left_half[i];
            i++;
        } else {
            cont[k] = right_half[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        cont[k] = left_half[i];
        i++;
        k++;
    }
    while (j < n2) {
        cont[k] = right_half[j];
        j++;
        k++;
    }
}

template <typename T>
void mergeInsertionSort(T& cont, int left, int right, int threshold) {
    if (left < right) {
        if (right - left <= threshold) {
            insertionSort(cont, left, right);
        } else {
            int middle = left + (right - left) / 2;

            mergeInsertionSort(cont, left, middle, threshold);
            mergeInsertionSort(cont, middle + 1, right, threshold);
            mergeSort(cont, left, middle, right);
        }
    }
}

template <typename T>
void	print(T &arr) {
	typename T::iterator it;
	for (it = arr.begin(); it != arr.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
