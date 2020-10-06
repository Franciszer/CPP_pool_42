/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 18:13:17 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/06 18:20:03 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	void	*serialized_data;
	Data	*deserialized_data;
	serialized_data = serialize();
	deserialized_data = deserialize(serialized_data);
	
	std::cout << "s1: " + deserialized_data->s1 << std::endl;
	std::cout << "s2: " + deserialized_data->s2 << std::endl;
	std::cout << "integer: " << deserialized_data->n << std::endl;
	delete reinterpret_cast<char*>(serialized_data);
	delete deserialized_data;
	return 0;
}