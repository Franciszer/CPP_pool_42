/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 18:23:29 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/06 18:25:45 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP

# define CLASSES_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Base {
	public:
		virtual ~Base(void);
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

void identify_from_pointer(Base * p);
void identify_from_reference( Base & p);

#endif
