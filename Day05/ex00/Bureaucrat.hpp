// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: myprosku <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/04/10 12:45:03 by myprosku          #+#    #+#             //
//   Updated: 2018/04/10 12:45:06 by myprosku         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>

class Bureaucrat
{
	private:

	const std::string _name;
	int			_grade;

	public:
	class GradeTooHighException : public std::exception
	{
		public:
		  GradeTooHighException();
		  GradeTooHighException(GradeTooHighException const &obj);
		  ~GradeTooHighException() throw();
		  GradeTooHighException &operator=(GradeTooHighException const &obj);
		  virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
		  GradeTooLowException();
		  GradeTooLowException(GradeTooLowException const &obj);
		  ~GradeTooLowException() throw();
		  GradeTooLowException &operator=(GradeTooLowException const &obj);
		  virtual const char *what() const throw();
	};
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &obj);
	Bureaucrat &operator=(Bureaucrat const &obj);
	std::string getName() const;
	int getGrade() const;
	void setGrade(int grade);
	void setName(std::string name);
	void incrementGrade();
	void decrementGrade();

};

std::ostream & operator << (std::ostream & o, const Bureaucrat & obj);

#endif
