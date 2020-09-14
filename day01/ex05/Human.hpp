/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:38:48 by frthierr          #+#    #+#             */
/*   Updated: 2020/09/14 13:35:11 by frthierr         ###   ########.fr       */
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

	std::string			identify(void) const;
	Brain				getBrain(void) const;

private:
	Brain const			_brain;	
};

#endif
