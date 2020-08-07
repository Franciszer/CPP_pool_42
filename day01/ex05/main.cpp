/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:39:08 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/07 16:56:57 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int	main(void)
{
	Brain	newBrain = Brain();
	Brain	brain2 = Brain();
	
	std::cout << newBrain.identifier() << std::endl;
	std::cout << brain2.identifier() << std::endl;
	return 0;
}