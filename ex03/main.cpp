/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:28:52 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:28:53 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main( void )
{
	{
		Weapon	club = Weapon( "crude spiked club" );

		HumanA	bob( "Bob", club );
		bob.attack();
		club.setType( "some other type of club" );
		bob.attack();
	}
	{
		Weapon	club = Weapon( "crude spiked club" );

		HumanB	jim( "Jim" );
		jim.setWeapon( club );
		jim.attack();
		club.setType( "some other type of club" );
		jim.attack();
	}

	return 0;
}
