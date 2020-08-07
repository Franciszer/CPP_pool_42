/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 11:34:29 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/07 12:17:40 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP

# define PONY_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Pony
{
public:
	Pony(std::string name);
	~Pony(void);

	static Pony		*ponyOnTheHeap(std::string name);
	static Pony		ponyOnTheStack(std::string name);

	std::string		name;
};

#endif
