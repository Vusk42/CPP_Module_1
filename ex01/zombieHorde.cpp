/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:27:07 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:38:11 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	if ( N <= 0 )
		return ( NULL );

	Zombie*	horde = new Zombie[N];

	for ( int i = 0; i < N; i++ )
		horde[i].setName( name );

	return ( horde );
}
