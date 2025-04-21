/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:59:12 by armitite          #+#    #+#             */
/*   Updated: 2025/04/19 16:39:20 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template < typename T >
T const &max(T const & x, T const & y) {

	return ( x >= y ? x : y);

}

template < typename T >
T const &min(T const & x, T const & y) {

	return ( x <= y ? x : y);

}

template < typename T >
void swap(T & x, T & y) {

	T temp;
	
	temp = x;
	x = y;
	y = temp; 

}
