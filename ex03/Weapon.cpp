/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:28:19 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:28:43 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) : type( "" ) { return ; }

Weapon::Weapon( std::string type ) : type( type ) { return ; }

Weapon::~Weapon( void ) { return ; }

const std::string&	Weapon::getType( void ) const { return this->type; }

void	Weapon::setType( std::string type )
{
	this->type = type;
	return ;
}
