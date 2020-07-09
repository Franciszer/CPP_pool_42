/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciszer <franciszer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:30:57 by franciszer        #+#    #+#             */
/*   Updated: 2020/07/09 21:57:43 by franciszer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc ; i++)
	{
		std::string gilbert(argv[i]);
		for (unsigned int j = 0; j < gilbert.length(); j++)
			std::cout << (char)std::toupper(gilbert[j]);
	}
	std::cout << std::endl;
	return (0);
}