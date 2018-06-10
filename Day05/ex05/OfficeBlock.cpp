/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 15:16:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/10 15:16:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : _intern(NULL), _signer(NULL), _executor(NULL)
{
}

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executor)
{
	*_intern = intern;
	_executor = new Bureaucrat(executor);
	_signer = new Bureaucrat(signer);
}

OfficeBlock::~OfficeBlock()
{
}

void OfficeBlock::setExecutor(Bureaucrat &executor)
{
	_executor = new Bureaucrat(executor);
}

Bureaucrat* OfficeBlock::getExec()
{
	return _executor;
}

Bureaucrat* OfficeBlock::getSigner()
{
	return _signer;
}

void OfficeBlock::setIntern(Intern &intern)
{
	*_intern = intern;
}

void OfficeBlock::setSigner(Bureaucrat &signer)
{
	_signer = new Bureaucrat(signer);
}

void OfficeBlock::doBureaucracy(std::string const form, std::string const target)
{
	Form *f;
	f = _intern->makeForm(form, target);
	if (f)
	{
		f->beSigned(*_signer);
		f->execute(*_executor);
	}
}