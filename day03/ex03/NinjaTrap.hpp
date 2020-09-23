/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:30:42 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/23 18:01:52 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP

# define NINJATRAP_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap {
	public:
		NinjaTrap(std::string name);
		~NinjaTrap(void);

	private:
		void	ninjaShoebox(ClapTrap &clapTrap);
		void	ninjaShoebox(FragTrap &fragTrap);
		void	ninjaShoebox(ScavTrap &scavTrap);
		void	ninjaShoebox(NinjaTrap &ninjaTrap);
		
};

#endif
