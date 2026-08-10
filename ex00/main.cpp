/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:26:12 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:36:34 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main( void )
{
	std::cout << "--- Heap allocation (newZombie) ---" << std::endl;
	Zombie*	heapZombie = newZombie( "HeapFoo" );
	heapZombie->announce();
	delete heapZombie;

	std::cout << "\n--- Stack allocation (randomChump) ---" << std::endl;
	randomChump( "StackBar" );

	return (0);
}
