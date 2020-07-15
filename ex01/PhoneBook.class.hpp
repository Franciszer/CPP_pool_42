/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:58:48 by franciszer        #+#    #+#             */
/*   Updated: 2020/07/15 14:46:17 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include <iostream>
#include <iomanip>
# include <string>

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);

	void	interpretCommand(void);
private:
	Contact	_contacts[8];
	int		_nbContact;
	void	_addContact(void);
	void	_searchContact(void);
};

#endif
