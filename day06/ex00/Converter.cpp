/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 18:25:17 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/05 18:36:13 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(void) {
	return ;
}

Converter::Converter(Converter const &src) {
	(void)src;
	return ;
}

Converter::~Converter(void) {
	return ;
}

Converter	&Converter::operator=(Converter const &src) {
	(void)src;
	return *this;
}

void			Converter::convert(const char *src){
	Converter::_toChar(src);
	Converter::_toInt(src);
	Converter::_toFloat(src);
	Converter::_toDouble(src);
}

void			Converter::_toChar(const char *src){
	
}

void			Converter::_toInt(const char *src){
	
}

void			Converter::_toFloat(const char *src){
	
}

void			Converter::_toDouble(const char *src){
	
}

