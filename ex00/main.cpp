/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:59:09 by armitite          #+#    #+#             */
/*   Updated: 2025/04/19 16:50:36 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"
#include <iostream>


int main(void)
{
	int a = 42;
	int b = 21;
	char c = 'c';
	char d = 'd';
	
	std::cout << "------------ Max -----------" << std::endl;
	std::cout << "Max of " << a << " and " << b << " is : ";
	std::cout << max<int>(a, b) << std::endl;
	std::cout << "Max of " << c << " and " << d << " is : ";
	std::cout << max<char>(c, d) << std::endl;

	std::cout << "------------ Min -----------" << std::endl;
	std::cout << "Min of " << a << " and " << b << " is : ";
	std::cout << min<int>(a, b) << std::endl;
	std::cout << "Min of " << c << " and " << d << " is : ";
	std::cout << min<char>(c, d) << std::endl;

	std::cout << "------------ Swap -----------" << std::endl;
	std::cout << "Swap of a : " << a << " and b :" << b << std::endl;
	swap<int>(a, b);
	std::cout << "now a : " << a << " and b : " << b << std::endl;
	std::cout << "Swap of c : " << c << " and d :" << d << std::endl;
	swap<char>(c, d);
	std::cout << "now c : " << c << " and d : " << d << std::endl;

	return (0);
}