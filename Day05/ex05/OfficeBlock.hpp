/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 15:16:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/10 15:16:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_H
# define OFFICEBLOCK_H
# include "Form.hpp"
# include "Intern.hpp"
# include "Bureaucrat.hpp"

class OfficeBlock
{
private:

	Intern *_intern;
	Bureaucrat *_signer;
	Bureaucrat *_executor;

public:
	OfficeBlock();
	OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executor);
	~OfficeBlock();
	void setIntern(Intern &intern);
	void setSigner(Bureaucrat &signer);
	void setExecutor(Bureaucrat &executor);
	Bureaucrat* getSigner();
	Bureaucrat* getExec();
	void doBureaucracy(std::string const, std::string const);
};
#endif