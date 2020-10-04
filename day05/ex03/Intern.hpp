/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 14:15:35 by user42            #+#    #+#             */
/*   Updated: 2020/10/04 15:30:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP

# define INTERN_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern;

typedef struct  { std::string name; Form *(*func)(std::string); } FormPairs;

Form    *makePresidentialForm(std::string target);
Form    *makeRobotomyRequestForm(std::string target);
Form    *makeShrubberyCreationForm(std::string target);


class Intern {
    public:
        Intern(void);
        Intern(Intern const &src);
        virtual ~Intern(void);

        Intern   &operator=(Intern const &src);

        Form    *makeForm(std::string type, std::string target) const;
        class   FormDoesNotExistException: public std::exception {
            virtual const char *what() const throw();
        };
    private:
        static FormPairs const   formPairs[];
};

#endif
