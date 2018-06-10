/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 17:54:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/10 17:54:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_H
# define CENTRALBUREAUCRACY_H
# include "OfficeBlock.hpp"

class CentralBureaucracy
{
private:

	OfficeBlock _blocks[20];
	std::string _queue[20];
public:
	CentralBureaucracy();
	CentralBureaucracy(CentralBureaucracy const &obj);
	~CentralBureaucracy();
	CentralBureaucracy &operator=(CentralBureaucracy const &obj);
	void feedBur(Bureaucrat &obj);
	void queueUp(std::string const target);
	void doBureaucracy();
};

#endif