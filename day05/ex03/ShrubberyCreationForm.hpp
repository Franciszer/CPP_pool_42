/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 17:02:38 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/03 18:34:25 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP

# define SHRUBBERY_CREATION_FORM_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Form.hpp"

class	Form;

class ShrubberyCreationForm: public Form {
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		virtual ~ShrubberyCreationForm(void);

		ShrubberyCreationForm   &operator=(ShrubberyCreationForm const &src);
		std::string				getTarget() const;
		void					execute(Bureaucrat const &executor) const;

		class	FileOpenException: public std::exception {
			virtual const char	*what() const throw();
		};
	private:
		static std::string const	_name;
		static std::string const	_tree[3];
		std::string					_target;
};

#endif
