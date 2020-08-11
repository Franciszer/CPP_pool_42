/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciszer <franciszer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 11:27:25 by franciszer        #+#    #+#             */
/*   Updated: 2020/08/08 12:16:45 by franciszer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP

# define HUMAN_A_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "HumanB.hpp"
# include "Weapon.hpp"

class	Weapon;

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void	attack(void);

	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif
