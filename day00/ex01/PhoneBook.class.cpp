/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:45:45 by franciszer        #+#    #+#             */
/*   Updated: 2020/09/13 15:56:11 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

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
			if (!std::cin.eof())
				std::cout << "Type command [ADD, EXIT, SEARCH]: ";
			std::getline(std::cin, command);
			if (std::cin.eof()) {
				std::cout << std::endl;
				exit(0);
			}
			else if (command == "EXIT")
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
	if (std::cin.fail() || index >= this->_nbContact || index < 0) {
		std::cout << "Please type in an integer between 0 and " << this->_nbContact - 1 << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	else {
		this->_contacts[index].printFullContact();
		std::cin.ignore(INT_MAX, '\n');
	}
	return ;
}

void	PhoneBook::_addContact( void ) {
		if (this->_nbContact > 7)
			std::cout << "PhoneBook is full" << std::endl;
		else
			this->_contacts[_nbContact++].setValues();
}
