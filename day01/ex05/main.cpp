/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciszer <franciszer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:39:08 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/08 11:16:14 by franciszer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int	main(void)
{
	Human	francis = Human();

	std::cout << francis.identify() << std::endl;
	std::cout << francis.getBrain().identify() << std::endl;
	return 0;
}