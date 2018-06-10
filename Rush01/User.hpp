/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 15:03:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/14 15:03:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USER_H
# define USER_H
# include "IMonitorModule.hpp"

class User : public IMonitorModule
{
private:
	User(User const &obj);
	User &operator=(User const &obj);

public:
	User();
	~User();
	virtual void displayModuleInfo();

};
#endif