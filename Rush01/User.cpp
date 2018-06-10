/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 15:03:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/14 15:03:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "User.hpp"

User::User()
{
}

User::~User()
{
}

void User::displayModuleInfo()
{
	struct utsname ud;
	uname(&ud);
	mvprintw(12, 0, "{-----------------------USER-----------------------}");
	mvprintw(13, 0, "Host name: %s", ud.nodename);
	mvprintw(14, 0, "User name: %s", getlogin());
	mvprintw(15, 0, "{--------------------------------------------------}");

}
