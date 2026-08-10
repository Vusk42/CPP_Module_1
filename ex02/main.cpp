/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:27:18 by marudlof          #+#    #+#             */
/*   Updated: 2026/08/03 14:36:07 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( void )
{
	std::string		stringVar = "HI THIS IS BRAIN";
	std::string		*stringPTR = &stringVar;
	std::string		&stringREF = stringVar;

	std::cout << "--- Memory addresses ---" << std::endl;
	std::cout << "Address of the string variable: " << &stringVar << std::endl;
	std::cout << "Address held by stringPTR:      " << stringPTR << std::endl;
	std::cout << "Address held by stringREF:      " << &stringREF << std::endl;

	std::cout << "\n--- Values ---" << std::endl;
	std::cout << "Value of the string variable:   " << stringVar << std::endl;
	std::cout << "Value pointed to by stringPTR:  " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF:  " << stringREF << std::endl;

	return ( 0 );
}
