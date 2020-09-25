/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 17:59:52 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/25 12:08:30 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP

# define SUPERTRAP_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: virtual public FragTrap, virtual public NinjaTrap {
	public:
		SuperTrap(std::string name="default");
		SuperTrap(SuperTrap const &src);
		~SuperTrap(void);

		void	  rangedAttack(std::string const &target);
		void	  meleeAttack(std::string const &target);
	private:
		
};

#endif
