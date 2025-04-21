/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:58:54 by armitite          #+#    #+#             */
/*   Updated: 2025/04/21 15:06:53 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void divide(int & nbr) {
    nbr = nbr / 2;
}

void printArray(int *array)
{
    for (int i = 0; i < 10; i++) {
        std::cout << ' ' << array[i] << ' ';
    }
    std::cout << std::endl;

	return ;
}

int main()
{
    int array[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    
    printArray(array);
    iter(array, 10, divide);
    printArray(array);

    return 0;
}