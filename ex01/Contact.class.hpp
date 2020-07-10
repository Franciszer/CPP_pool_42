/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franciszer <franciszer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:59:44 by franciszer        #+#    #+#             */
/*   Updated: 2020/07/10 15:53:36 by franciszer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
public:
	Contact(void);
	~Contact();
	void	setValues(void);
	void	printContact(void);
	void	printFullContact(void);
private:
	static std::string	_keys[11];
	std::string			_values[11];
};

#endif
