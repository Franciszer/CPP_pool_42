/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciszer <franciszer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 11:33:34 by franciszer        #+#    #+#             */
/*   Updated: 2020/08/08 11:49:41 by franciszer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "HumanA.hpp"
# include "HumanB.hpp"

class Weapon
{
	public:
		Weapon(std::string type = "");
		~Weapon(void);
		void		setType(std::string type);
		std::string	&getType(void);

	private:
		std::string	_type;		
};

#endif
