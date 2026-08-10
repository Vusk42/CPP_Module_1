/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:27:57 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:28:08 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ) : name( name ), weapon( NULL ) { return ; }

HumanB::~HumanB( void ) { return ; }

void	HumanB::setWeapon( Weapon& weapon )
{
	this->weapon = &weapon;
	return ;
}

void	HumanB::attack( void ) const
{
	if ( this->weapon == NULL )
	{
		std::cout << this->name << " attacks with their bare hands"
				  << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their "
			  << this->weapon->getType() << std::endl;
	return ;
}
