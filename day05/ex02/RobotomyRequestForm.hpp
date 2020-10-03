/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 17:02:38 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/03 18:47:01 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RONOTOMY_REQUEST_FORM_HPP

# define RONOTOMY_REQUEST_FORM_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Form.hpp"
# include <chrono>

class	Form;

class RobotomyRequestForm: public Form {
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		virtual ~RobotomyRequestForm(void);

		RobotomyRequestForm   &operator=(RobotomyRequestForm const &src);
		std::string				getTarget() const;
		void					execute(Bureaucrat const &executor) const;

	private:
		static std::string const	_name;
		std::string					_target;
};

#endif
