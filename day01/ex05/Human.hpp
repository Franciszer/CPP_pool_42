/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:38:48 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/07 17:00:11 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP

# define HUMAN_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Brain.hpp"

class Human {

public:
	Human(void);
	~Human(void);

	std::string		identifier(void);

private:
	Brain const	_brain;	
};

#endif
