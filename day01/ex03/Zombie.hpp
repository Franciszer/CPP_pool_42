/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:39:35 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/07 15:19:44 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
public:
	Zombie(std::string name = "", std::string type = "");
	~Zombie(void);

	void		advert(void);

	std::string name;
	std::string type;

private:
	
};

#endif
