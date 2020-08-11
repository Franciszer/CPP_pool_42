/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciszer <franciszer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:49:05 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/08 11:03:30 by franciszer       ###   ########.fr       */
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

	static std::string	randomName(void);

	Zombie	*zombieHorde;
	void	announce();

private:
	static std::string	_zombieNames[];
	unsigned int		_size;
};

#endif
