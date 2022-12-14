/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:19:00 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/26 16:19:13 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define  PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm :public Form
{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target_);
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &copyAssig);
    ~PresidentialPardonForm();
    const std::string &getTarget() const;
    void execute(Bureaucrat const & executor) const;
    class FormNotSigned : public std::exception {
        virtual const char* what() const throw();
    };
};

#endif