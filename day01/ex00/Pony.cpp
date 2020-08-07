/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 11:49:11 by frthierr          #+#    #+#             */
/*   Updated: 2020/08/07 12:20:06 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name)
{
	this->name = name;
	std::cout << this->name << " is born " << std::endl;
}

Pony::~Pony(void)
{
	std::cout << this->name << " has died" << std::endl;
}

Pony	*Pony::ponyOnTheHeap(std::string name) {
	Pony	*heapPony = new Pony(name);
	
	std::cout << "He was born on the Heap" << std::endl;
	return (heapPony);
}

Pony	Pony::ponyOnTheStack(std::string name) {
	Pony	stackPony = Pony(name);
	
	std::cout << "He was born on the Stack" << std::endl;
	return (stackPony);
}
