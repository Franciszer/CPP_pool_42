/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 18:05:04 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/06 17:44:36 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char const *argv[])
{
	std::cout << std::fixed << std::setprecision(1);
	for (int i = 1 ; i < argc ; i++) {
		Converter	converter(argv[i]);
		converter.convert();
	}
	return 0;
}
