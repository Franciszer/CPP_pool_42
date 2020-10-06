/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 17:59:24 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/06 18:13:11 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void 	*serialize(void) {
	char	*serialized_data = new char[sizeof(char) * 16 + sizeof(int)];
	int		i;
	
	for (i = 0 ; i < 8 ; i++)
		serialized_data[i] = 'a';
	std::srand(std::chrono::high_resolution_clock::now().time_since_epoch().count());
	*(reinterpret_cast<int*>(&serialized_data[i])) = std::rand();
	for (i = 12 ; i < 20; i++)
		serialized_data[i] = 'b';
	return reinterpret_cast<void*>(serialized_data);
}

Data 	*deserialize(void * raw) {
	Data	*deserialized_data = new Data;
	char	*converted_data = static_cast<char*>(raw);
	
	deserialized_data->s1.assign(converted_data, 8);
	deserialized_data->s2.assign(converted_data + 12, 8);
	deserialized_data->n = *(reinterpret_cast<int*>(&converted_data[8]));
	return deserialized_data;
}
