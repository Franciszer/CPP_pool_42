/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:55:30 by franciszer        #+#    #+#             */
/*   Updated: 2020/09/09 14:02:57 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{

}


std::string	Contact::_keys[11] = {	"first name",
									"last name",
									"nickname",
									"login",
									"postal address",
									"email address",
									"phone number",
									"birthday date",
									"favorite meal",
									"underwear color",
									"darkest secret"};

void	Contact::setValues(void) {
	for (int i = 0; i < 11 ; i++) {
		std::cout << Contact::_keys[i] << ": ";
		std::getline(std::cin, this->_values[i]);
	}
	return ;
}

void	Contact::printContact(void) {
	for (int i = 0; i < 3; i++) {
		if (this->_values[i].length() < 10)
			std::cout << "|" << std::right << std::setw(10) << this->_values[i];
		else
			std::cout << "|" << this->_values[i].substr(0, 9) << ".";	
	}
	std::cout << "|" << std::endl;
	return ;
}

void	Contact::printFullContact(void) {
	for (int i = 0 ; i < 11 ; i++) {
		std::cout << std::left << std::setw(20) << Contact::_keys[i] << ": ";
		std::cout << this->_values[i] << std::endl;
	}
	return ;
}