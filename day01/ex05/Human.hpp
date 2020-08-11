/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciszer <franciszer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:38:48 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/08 11:20:30 by franciszer       ###   ########.fr       */
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

	std::string		identify(void);
	Brain			getBrain(void);

private:
	Brain			_brain;	
};

#endif
