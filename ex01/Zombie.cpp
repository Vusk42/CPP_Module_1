/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:26:34 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:37:04 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) : name( "unnamed" )
{
	return ;
}

Zombie::Zombie( std::string name ) : name( name )
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " is destroyed" << std::endl;
	return ;
}

void	Zombie::setName( std::string name )
{
	this->name = name;
	return ;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
