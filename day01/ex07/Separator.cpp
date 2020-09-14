/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Separator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:58:11 by franciszer        #+#    #+#             */
/*   Updated: 2020/09/14 13:54:42 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Separator.hpp"

Separator::Separator(std::string const &file, std::string const &to_find, std::string const &to_replace):
file(file), to_find(to_find), to_replace(to_replace)
{
	if (!file.length())
		throw "file is empty";
	if (!to_find.length())
		throw "to_find is empty";
	// if (!to_replace.length())
	// 	throw "to_replace is empty";
}

Separator::~Separator(void)
{
}

void	Separator::replace(void) {
	std::string		line;
	std::ifstream	input_file;
	std::ofstream	s_output;
	
	input_file.open(this->file);
	if (!input_file)
		throw "failed to open input file";
	s_output.open(this->file + ".replace");
	if (!s_output)
		throw "failed to open output file";
	while (std::getline(input_file, line)) {
		s_output << this->replace_line(line);
		if (!input_file.eof())
			s_output << std::endl;	
	}
	input_file.close();
	s_output.close();
}

std::string	Separator::replace_line(std::string const &line) {
	std::stringstream	s_replaced;
	size_t				j;
	size_t				to_find_length = this->to_find.length();
	
	for (size_t i = 0; i < line.length(); i++) {
			j = 0;
			while (line[i + j] == this->to_find[j] && j < to_find_length)
				j++;
			if (j == to_find_length) {
				s_replaced << this->to_replace;
				i+= to_find_length - 1;
			}
			else
				s_replaced << line[i];
	}
	return s_replaced.str();
}
