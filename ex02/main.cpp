/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:22:48 by armitite          #+#    #+#             */
/*   Updated: 2025/04/21 13:11:33 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	std::cout << "------------- Empty Array -------------" << std::endl;
	Array<int> empty;
	std::cout << empty.size() << std::endl;

	std::cout << "------------- Array -------------" << std::endl;
	Array<int> Test(5);
	std::cout << Test.size() << std::endl;
	for (unsigned int i = 0; i < Test.size(); i++) {
			Test[i] = i;
		}

	std::cout << "------------- Display Array -------------" << std::endl;
	for (unsigned int i = 0; i < Test.size(); i++)
    {
        std::cout << "Array[" << i << "] = " << Test[i] << std::endl;
    }
    std::cout << std::endl;
	
	std::cout << "------------- Copy Array -------------" << std::endl;
	Array<int> CopyArray(Test);
	CopyArray[0] = 13;
	CopyArray[1] = 42;
	for (unsigned int i = 0; i < Test.size(); i++)
    {
        std::cout << "Array[" << i << "] = " << CopyArray[i] << std::endl;
    }

	std::cout << "------------- Exception -------------" << std::endl;
	 try {
        std::cout << Test[10] << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception : " << e.what() << std::endl;
    }
	
	return (0);
}