/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 12:40:11 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/08 18:37:33 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> V;
	
	V.push_back(1);
	V.push_back(2);
	V.push_back(3);
	V.push_back(4);
	V.push_back(45);
	V.push_back(24);
	std::vector<int>::const_iterator	it;
	if ((it = easyfind(V, 2)) != V.end())
		std::cout << *it << std::endl;
	else
		std::cerr << "Error: element is not present in the container" << std::endl;
	if ((it = easyfind(V, 24)) != V.end())
		std::cout << *it << std::endl;
	else
		std::cerr << "Error: element is not present in the container" << std::endl;
	if ((it = easyfind(V, 123123123)) != V.end())
		std::cout << *it << std::endl;
	else
		std::cerr << "Error: element is not present in the container" << std::endl;
	return 0;
}	