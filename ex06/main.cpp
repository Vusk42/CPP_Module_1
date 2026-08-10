/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:30:40 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:30:45 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main( int argc, char** argv )
{
	if ( argc != 2 )
	{
		std::cerr << "Usage: " << argv[0]
				  << " <DEBUG|INFO|WARNING|ERROR>" << std::endl;
		return 1;
	}

	Harl	harl;

	harl.complain( argv[1] );
	return 0;
}
