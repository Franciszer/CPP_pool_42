/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 11:59:12 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/07 12:23:28 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int	main(void)
{
	Pony	ponyOnTheStack = Pony::ponyOnTheStack("Jeremy");
	Pony	*ponyOntheHeap = Pony::ponyOnTheHeap("Jojo");

	delete ponyOntheHeap;
	return (0);
}
