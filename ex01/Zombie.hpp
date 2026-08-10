/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:26:54 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:26:56 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

		void	setName( std::string name );
		void	announce( void );
};

Zombie*	zombieHorde( int N, std::string name );

#endif
