/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:36:49 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/28 13:57:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP

# define ENEMY_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Enemy
{
	protected:
		Enemy();
		
		int			_hp;
		std::string	_type;
	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const &src);
		virtual ~Enemy();

		Enemy 				&operator=(Enemy const &src);
		std::string virtual getType() const;
		int 				getHP() const;
		virtual void 		takeDamage(int);
};

#endif
