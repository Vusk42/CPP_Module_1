/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:29:55 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:29:57 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main( void )
{
	Harl	harl;

	std::cout << "--- DEBUG ---" << std::endl;
	harl.complain( "DEBUG" );

	std::cout << "\n--- INFO ---" << std::endl;
	harl.complain( "INFO" );

	std::cout << "\n--- WARNING ---" << std::endl;
	harl.complain( "WARNING" );

	std::cout << "\n--- ERROR ---" << std::endl;
	harl.complain( "ERROR" );

	std::cout << "\n--- Unknown level ---" << std::endl;
	harl.complain( "SOMETHING" );

	return 0;
}
