/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:40:58 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/07 14:28:53 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#ifndef ZOMBIE_EVENT_HPP

# define ZOMBIE_EVENT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <chrono>

class ZombieEvent
{
public:
	ZombieEvent(void);
	~ZombieEvent(void);

	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump(void);

private:
	std::string	_zombieType;
	static std::string	_zombieNames[];
};

#endif
