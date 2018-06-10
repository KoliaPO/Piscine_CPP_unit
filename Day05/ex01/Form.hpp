// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: myprosku <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/04/10 12:43:59 by myprosku          #+#    #+#             //
//   Updated: 2018/04/10 12:44:00 by myprosku         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _gradeS;
	const int _gradeE;
public:

	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException();
			GradeTooHighException(GradeTooHighException const &obj);
			~GradeTooHighException() throw();
			GradeTooHighException &operator=(GradeTooHighException const &obj);
			virtual const char* what() const throw ();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException();
			GradeTooLowException(GradeTooLowException const &obj);
			~GradeTooLowException() throw();
			GradeTooLowException &operator=(GradeTooLowException const &obj);
			virtual const char* what() const throw ();
	};

	Form();
	Form(std::string name, int gradeS, int gradeE);	
	Form(Form const &obj);
	~Form();
	Form &operator=(Form const &obj);
	std::string getName() const;
	bool getSigned() const;
	int getGradeS() const;
	int getGradeE() const;
	void beSigned(Bureaucrat &bur);

};

std::ostream & operator << (std::ostream & o, const Form & obj);

#endif
