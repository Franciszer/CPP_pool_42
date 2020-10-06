/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 18:25:17 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/06 22:09:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(char const *str):
_checkDouble(false),
_checkChar(true),
_isNan(false)
{
	if (std::string(str) == "nan")
		this->_isNan = true;
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
_checkChar(src._checkChar),
_isNan(src._isNan)
{
	return ;
}

Converter::~Converter(void) {
	return ;
}

Converter	&Converter::operator=(Converter const &src) {
	if (this != &src)
		*this = src;
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
	else if (this->_isNan)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void			Converter::_toInt(){
	std::cout << "int: ";
	if (this->_checkDouble &&\
	this->_value <= INT32_MAX && this->_value >= INT32_MIN)
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
