/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:45:45 by franciszer        #+#    #+#             */
/*   Updated: 2020/07/15 14:48:31 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <string>
PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook Creator Called" << std::endl;
	this->_nbContact = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook Destructor Called" << std::endl;
}

void	PhoneBook::interpretCommand(void) {
		std::string	command;

		while (1) {
			std::cout << "Type command [ADD, EXIT, SEARCH]: ";
			std::getline(std::cin, command);
			if (command == "EXIT")
				exit(0);
			else if (command == "ADD")
				this->_addContact();
			else if (command == "SEARCH")
				this->_searchContact();
		}
}

void	PhoneBook::_searchContact(void) {
	if (!this->_nbContact) {
		std::cout << "No contacts in phoneBook" << std::endl;
		return ;	
	}
	std::cout << "|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
	for (int i = 0 ; i < _nbContact ; i++) {
		std::cout << "|" << std::right << std::setw(10) << i;
		this->_contacts[i].printContact();
	}
	int	index;
	std::cout << "Type in contact index: ";
	std::cin >> index;
	if (std::cin.fail() || index >= this->_nbContact)
		std::cout << "Please type in an integer between 0 and " << this->_nbContact << std::endl;
	else {
		this->_contacts[index].printFullContact();
	}
	return ;
}

void	PhoneBook::_addContact( void ) {
		if (this->_nbContact > 7)
			std::cout << "PhoneBook is full" << std::endl;
		else
			this->_contacts[_nbContact++].setValues();
}
