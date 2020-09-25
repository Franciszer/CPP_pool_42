/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 13:30:42 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/24 15:38:13 by frthierr         ###   ########.fr       */
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

class NinjaTrap: virtual public ClapTrap {
	public:
		NinjaTrap(std::string name = "default");
		~NinjaTrap(void);

		void	rangedAttack(std::string const &target);
        void	meleeAttack(std::string const &target);
		void	ninjaShoebox(ClapTrap &clapTrap);
		void	ninjaShoebox(FragTrap &fragTrap);
		void	ninjaShoebox(ScavTrap &scavTrap);
		void	ninjaShoebox(NinjaTrap &ninjaTrap);
	private:
		
};

#endif
