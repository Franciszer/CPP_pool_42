/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 18:25:17 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/06 17:43:07 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(char const *str):
_checkDouble(false),
_checkChar(true)
{
	if (sscanf(str, "%lf", &this->_value))
		this->_checkDouble = true;
	if (this->_checkDouble)
		this->_charValue = static_cast<char>(this->_value);
	else if (sscanf(str, "%c", &this->_charValue) != 1)
		this->_checkChar = false;
	return ;
}

Converter::Converter(Converter const &src):
_value(src._value),
_charValue(src._charValue),
_checkDouble(src._checkDouble),
_checkChar(src._checkChar)
{
	return ;
}

Converter::~Converter(void) {
	return ;
}

Converter	&Converter::operator=(Converter const &src) {
	if (this != &src) {
		this->_value = src._value;
		this->_charValue = src._charValue;
		this->_checkDouble = src._checkDouble;
		this->_checkChar = src._checkChar;
	}
	return *this;
}

void			Converter::convert(){
	this->_toChar();
	this->_toInt();
	this->_toFloat();
	this->_toDouble();
}

void			Converter::_toChar(){
	std::cout << "char: ";
	if (this->_checkChar && IS_DISPLAYABLE(this->_charValue))
		std::cout << this->_charValue << std::endl;
	else
		std::cout << "non displayable" << std::endl;
}

void			Converter::_toInt(){
	std::cout << "int: ";
	if (this->_checkDouble &&\
	this->_value <= INT_MAX && this->_value >= INT_MIN)
		std::cout << static_cast<int>(this->_value) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void			Converter::_toFloat(){
	std::cout << "float: ";
	if (this->_checkDouble)
		std::cout << static_cast<float>(this->_value);
	else
		std::cout << "nan";
	std::cout << "f" << std::endl;
}

void			Converter::_toDouble(){
	std::cout << "double : ";
	if (this->_checkDouble)
		std::cout << this->_value << std::endl;
	else
		std::cout << "nan" << std::endl;
}
