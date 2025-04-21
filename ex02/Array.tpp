/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:52:32 by armitite          #+#    #+#             */
/*   Updated: 2025/04/21 13:25:35 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

template <typename T>
Array<T>::Array() : _array(0), _size(0) {

	std::cout << "Default contructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {

	std::cout << "N contructor called" << std::endl;
}

template <typename T>
Array<T>::Array(Array const &copy) {
	
	std::cout << "Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
	return ;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &assign) {

	std::cout << "Operator = called" << std::endl;
	if (this != &assign) {
		this->_size = assign._size;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; ++i) {
			this->_array[i] = assign._array[i];
		}
	}
	return (*this);
}

template <typename T>
Array<T>::~Array() {
    delete[] _array;
}

template <typename T>
T	&Array<T>::operator[](unsigned int index) {

	if (index >= _size) {
		
		throw std::out_of_range("Index out of bounds");
	}
	return _array[index];
}

template <typename T>
unsigned int	Array<T>::size() {

	return (_size);
}
