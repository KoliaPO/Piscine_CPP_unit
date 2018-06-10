/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSModule.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 14:40:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/14 14:40:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OSModule.hpp"

OSModule::OSModule()
{
}

OSModule::~OSModule()
{
}

void OSModule::displayModuleInfo()
{
	struct utsname unameData;
	uname(&unameData);
	char buf[1024];
	unsigned buflen = 0;
	char line[256];
	FILE *sw_vers = popen("sw_vers", "r");
	while (fgets(line, sizeof(line), sw_vers) != NULL) {
		int l = snprintf(buf + buflen, sizeof(buf) - buflen, "%s", line);
		buflen += l;
	}
	pclose(sw_vers);
	mvprintw(4, 0, "{-----------------------OS-------------------------}");
	mvprintw(5, 0, "%s", buf);
	mvprintw(8, 0, "Core name:      %s", unameData.sysname);
	mvprintw(9, 0, "Core release:   %s", unameData.release);
	mvprintw(10, 0, "{--------------------------------------------------}");

}