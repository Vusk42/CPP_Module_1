/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:28:46 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:28:48 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );

		const std::string&	getType( void ) const;
		void				setType( std::string type );
};

#endif
