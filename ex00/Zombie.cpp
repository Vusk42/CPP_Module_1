/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:25:06 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:34:28 by marudlof         ###   ########.fr       */
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

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
