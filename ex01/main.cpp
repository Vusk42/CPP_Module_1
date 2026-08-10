/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:27:00 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:38:20 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main( void )
{
	int	N = 5;

	std::cout << "--- Creating a horde of " << N << " zombies ---" << std::endl;
	Zombie*	horde = zombieHorde( N, "Bob" );

	for ( int i = 0; i < N; i++ )
		horde[i].announce();

	std::cout << "\n--- Deleting the horde ---" << std::endl;
	delete[] horde;

	std::cout << "\n--- Edge case: zombieHorde(0) ---" << std::endl;
	Zombie*	empty = zombieHorde( 0, "Nobody" );
	if ( empty == NULL )
		std::cout << "zombieHorde(0) returned NULL as expected" << std::endl;
	delete[] empty;

	return ( 0 );
}
