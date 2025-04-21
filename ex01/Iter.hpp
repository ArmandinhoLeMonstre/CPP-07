/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:59:37 by armitite          #+#    #+#             */
/*   Updated: 2025/04/21 14:59:03 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template < typename T >
void	iter(T *array, size_t length, void(*f)(T &)) {
	
	if (array == NULL || f == NULL)
		return;
	
	for (size_t i = 0; i < length; ++i)
		f(array[i]);

	return ;
}