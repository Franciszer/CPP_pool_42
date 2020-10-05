/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 18:05:04 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/05 18:36:24 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char const *argv[])
{
	for (int i = 1 ; i < argc ; i++) {
		Converter::convert(argv[i]);
		if (i != argc - 1)
			std::cout << std::endl;
	}
	return 0;
}
