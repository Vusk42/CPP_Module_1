/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:27:26 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:27:47 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon& weapon )
	: name( name ), weapon( weapon ) { return ; }

HumanA::~HumanA( void ) { return ; }

void	HumanA::attack( void ) const
{
	std::cout << this->name << " attacks with their "
			  << this->weapon.getType() << std::endl;
	return ;
}
