// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: myprosku <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/04/10 12:43:42 by myprosku          #+#    #+#             //
//   Updated: 2018/04/10 12:43:43 by myprosku         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Vasya"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooLowException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooHighException();
		_grade = grade;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : _name(obj.getName())
{
	_grade = obj.getGrade();
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
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooLowException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooHighException();
		_grade = grade;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	try
	{
		if ((_grade -= 1) < 1)
			throw Bureaucrat::GradeTooLowException();
		_grade--;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;		
	}
}

void Bureaucrat::decrementGrade()
{
	try
	{
		if ((_grade += 1) > 150)
			throw Bureaucrat::GradeTooHighException();
		_grade++;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;	
	}
	
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
        form.beSigned(*this);
        std::cout << _name << " signs " << form.getName() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
	{
        std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const &form)
{
	if (_grade > form.getGradeE())
		throw Bureaucrat::GradeTooLowException();
	else if(!form.getSigned())
		throw Form::NoSignedException();
	else
		std::cout << _name << " executes " << form.getName() << std::endl;
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
	return;
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
	return;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &obj)
{
	(void)obj;
	return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("(Bureaucrat) Grade you entered is too hight !!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("(Bureaucrat) Grade you entered is too low !!");
}
