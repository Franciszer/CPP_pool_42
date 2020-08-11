/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciszer <franciszer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:58:46 by franciszer        #+#    #+#             */
/*   Updated: 2020/08/11 21:25:02 by franciszer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Separator.hpp"

int	main(int argc, char **argv)
{
	try {
		if (argc != 4)
			throw "Error: replace takes 3 arguments [FILE, TO_FIND, TO_REPLACE]";	
		Separator	separator(argv[1], argv[2], argv[3]);
		separator.replace();
	}
	catch (const char *msg){
		std::cerr << "Error: " << msg << std::endl;		
	}
	return 0;
}
