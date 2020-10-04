/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 14:16:05 by user42            #+#    #+#             */
/*   Updated: 2020/10/04 15:32:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
    return ;
}

Intern::Intern(Intern const &src) {
    (void)src;
    return ;
}

Intern::~Intern(void) {
    return ;
}

Intern	&Intern::operator=(Intern const &src) {
    (void)src;
    return *this;
}

Form    *Intern::makeForm(std::string type, std::string target) const {
    for (int i = 0 ; i < 3 ; i++) {
        if (type == formPairs[i].name) {
            std::cout << "Intern creates " + type << std::endl;
            return formPairs[i].func(target);
        }
    }
    std::cerr << "Intern could not create " + type << std::endl;
    return NULL;
}

Form    *makePresidentialForm(std::string target) {
    Form    *newForm = new PresidentialPardonForm(target);
    return  newForm;
}

Form    *makeRobotomyRequestForm(std::string target) {
    Form    *newForm = new RobotomyRequestForm(target);
    return  newForm;
}

Form    *makeShrubberyCreationForm(std::string target) {
    Form    *newForm = new ShrubberyCreationForm(target);
    return  newForm;
}


FormPairs const Intern::formPairs[] = {
    {"presidential pardon", &makePresidentialForm},
    {"shrubbery creation", &makeShrubberyCreationForm},
    {"robotomy request", &makeRobotomyRequestForm}
};
