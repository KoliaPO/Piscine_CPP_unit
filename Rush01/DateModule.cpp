/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateModule.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 13:26:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/14 13:26:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DateModule.hpp"


DateModule::DateModule()
{
}

DateModule::~DateModule()
{
}

void DateModule::displayModuleInfo()
{
	time_t rawtime;
	struct tm *timeinfo;
	char buf[80];

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime (buf, 80, "%c", timeinfo);
	mvprintw(0, 0, "{-----------------------DATA-----------------------}");
	mvprintw(1, 0,"%s", buf);
	mvprintw(2, 0, "{--------------------------------------------------}");
}