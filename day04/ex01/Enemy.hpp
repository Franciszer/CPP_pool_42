/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:36:49 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/27 16:37:14 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP

# define ENEMY_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Enemy {
	public:
		Enemy(void);
		Enemy(Enemy const &src);
		virtual ~Enemy(void);

		Enemy   &operator=(Enemy const &src);

	private:
		
};

#endif
