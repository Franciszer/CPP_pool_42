/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:30:12 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/27 16:38:13 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP

# define AWEAPON_HPP

# include <iostream>
# include <iomanip>
# include <string>

class AWeapon
{
	private:
		AWeapon();
		AWeapon(AWeapon const &src);
		AWeapon 	&operator=(AWeapon const &src);
        std::string	_name;
		std::string	_apCost;
		std::string	_damage;
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		virtual 		~AWeapon();
		std::string		getName() const;
		int 			getAPCost() const;
		int 			getDamage() const;
		virtual void	attack() const = 0;
};

#endif
