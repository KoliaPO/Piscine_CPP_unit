// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: myprosku <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/04/10 12:44:56 by myprosku          #+#    #+#             //
//   Updated: 2018/04/10 12:44:59 by myprosku         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Vasya"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
}


Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : _name(obj.getName())
{
	*this = obj;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	_grade = obj.getGrade();
	return *this;
}

std::string Bureaucrat::getName() const
{
	return _name;
}


std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj)
{
	o << obj.getName() << ", bureaucrat grade" << obj.getGrade();
	return o;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	if ((_grade -= 1) < 1)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade--;
}

void Bureaucrat::decrementGrade()
{
	if ((_grade += 1) > 150)
		throw Bureaucrat::GradeTooHighException();
	else
	_grade++;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj)
{
	*this = obj;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &obj)
{
	(void)obj;
	return *this;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj)
{
	*this = obj;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &obj)
{
	(void)obj;
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("(Bureaucrat) Grade you entered is too hight !!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("(Bureaucrat) Grade you entered is too low !!");
}
