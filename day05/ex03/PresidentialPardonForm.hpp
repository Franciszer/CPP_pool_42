/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 18:51:43 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/03 18:51:46 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP

# define PRESIDENTIAL_PARDON_FORM_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Form.hpp"
# include <chrono>

class	Form;

class PresidentialPardonForm: public Form {
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		virtual ~PresidentialPardonForm(void);

		PresidentialPardonForm   &operator=(PresidentialPardonForm const &src);
		std::string				getTarget() const;
		void					execute(Bureaucrat const &executor) const;

	private:
		static std::string const	_name;
		std::string					_target;
};

#endif
