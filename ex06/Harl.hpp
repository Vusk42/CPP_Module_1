/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marudlof <marudlof@42.angouleme.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:30:31 by marudlof          #+#    #+#             */
/*   Updated: 2026/07/17 15:30:33 by marudlof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public:
		Harl( void );
		~Harl( void );

		void	complain( std::string level );
};

#endif
