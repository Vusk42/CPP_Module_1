/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:28:10 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:28:13 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon*		weapon;

	public:
		HumanB( std::string name );
		~HumanB( void );

		void	setWeapon( Weapon& weapon );
		void	attack( void ) const;
};

#endif
