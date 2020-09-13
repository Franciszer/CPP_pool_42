/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:49:05 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/13 18:43:25 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP

# define ZOMBIE_HORDE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <chrono>
#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(unsigned int n);
	~ZombieHorde(void);


	void	announce();

private:
	static std::string	_randomName(void);
	Zombie				*_zombieHorde;
	static std::string	_zombieNames[];
	unsigned int		_size;
};

#endif
