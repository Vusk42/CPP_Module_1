/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:27:50 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:27:52 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon&		weapon;

	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );

		void	attack( void ) const;
};

#endif
