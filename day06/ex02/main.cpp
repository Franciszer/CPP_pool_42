/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 18:36:42 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/06 18:39:14 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

int main()
{
	Base	*a = new A;	
	Base	*b = new B;	
	Base	*c = new C;

	identify_from_pointer(c);
	identify_from_pointer(a);	
	identify_from_pointer(b);	
	
	identify_from_reference(*b);
	identify_from_reference(*c);
	identify_from_reference(*a);

	delete a;
	delete b;
	delete c;
	return 0;
}
