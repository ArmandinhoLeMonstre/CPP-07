/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:22:51 by armitite          #+#    #+#             */
/*   Updated: 2025/04/21 12:27:58 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template < typename T >
class Array {
	
	private :

		T * _array;
		unsigned int _size;

	public :

		Array();
		Array(unsigned int n);
		Array(Array const &copy);
		Array &operator=(Array const &assign);

		~Array();

		T	&operator[](unsigned int index);
		unsigned int size();
};

#include "Array.tpp"