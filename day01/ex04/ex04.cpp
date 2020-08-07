/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:19:11 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/07 16:30:55 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string	&strRef = str;

	std::cout << "Pointer:" << std::endl;
	std::cout << "\t" << *strPtr << std::endl;
	std::cout << "Reference:" << std::endl;
	std::cout << "\t" << strRef << std::endl;
	return 0;
}