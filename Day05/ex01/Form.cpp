// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: myprosku <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/04/10 12:43:54 by myprosku          #+#    #+#             //
//   Updated: 2018/04/10 12:43:54 by myprosku         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"

Form::Form() : _name("No name"), _signed(false), _gradeS(150), _gradeE(150)
{
}

Form::Form(std::string name, int gradeS, int gradeE) : _name(name), _signed(false), _gradeS(gradeS), _gradeE(gradeE)
{
	if (gradeS < 1 || gradeE < 1)
		throw Form::GradeTooLowException();
	else if (gradeS > 150 || gradeE > 150)
		throw Form::GradeTooHighException();
}

Form::~Form()
{
}

Form::Form(Form const &obj) : _name(obj.getName()), _signed(false), _gradeS(obj.getGradeS()), _gradeE(obj.getGradeE())
{
	*this = obj;
}

Form &Form::operator=(Form const &obj)
{
	_signed = obj.getSigned();
	return *this;
}

std::string Form::getName() const
{
	return _name;
}

int Form::getGradeE() const
{
	return _gradeE;
}

int Form::getGradeS() const
{
	return _gradeS;
}

bool Form::getSigned() const
{
	return _signed;
}


std::ostream & operator<<(std::ostream & o, Form const & obj)
{
	o << obj.getName() << ", Form, a grade required to sign it " << obj.getGradeS();
 	o << " and  grade required to execute it " << obj.getGradeE() << " and signed" << obj.getSigned();
 	return o;
}

Form::GradeTooLowException::GradeTooLowException()
{
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj)
{
	*this = obj;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(Form::GradeTooLowException const &obj)
{
	(void)obj;
	return *this;
}

Form::GradeTooHighException::GradeTooHighException()
{
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj)
{
	*this = obj;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(Form::GradeTooHighException const &obj)
{
	(void)obj;
	return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
		return ("(Form) Grade you entered is too hight !!");
}

const char* Form::GradeTooLowException::what() const throw()
{
		return ("(Form) Grade you entered is too low !!");
}

void Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > _gradeS)
		throw Bureaucrat::GradeTooLowException();
	_signed = true;
}
