/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:24:55 by marudlof          #+#    #+#             */
/*   Updated: 2026/08/03 14:33:49 by marudlof         ###   ########.fr       */
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

		void	announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
