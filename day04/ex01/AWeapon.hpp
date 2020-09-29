/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:30:12 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/29 11:15:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP

# define AWEAPON_HPP

# include <iostream>
# include <iomanip>
# include <string>

# define NOT_SET	-1

class AWeapon
{
	protected:
        std::string	_name;
		int			_apCost;
		int			_damage;
	public:
		AWeapon(AWeapon const &src);
		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		virtual 		~AWeapon();
		AWeapon 		&operator=(AWeapon const &src);
		std::string		getName() const;
		int 			getAPCost() const;
		int 			getDamage() const;
		virtual void	attack() const = 0;
};

#endif
