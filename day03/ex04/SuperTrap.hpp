/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 17:59:52 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/24 17:41:11 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP

# define SUPERTRAP_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap {
	public:
		SuperTrap(std::string name="default");
		SuperTrap(SuperTrap const &src);
		~SuperTrap(void);

		void	  ls
		rangedAttack(std::string const &target);
		void	  ls
		meleeAttack(std::string const &target);
	private:
		
};

#endif
