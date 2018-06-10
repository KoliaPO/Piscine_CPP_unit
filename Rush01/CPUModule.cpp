/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPUModule.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 15:44:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/14 15:44:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mach/mach_host.h>
#include "CPUModule.hpp"

CPUModule::CPUModule()
{
}

CPUModule::~CPUModule()
{
}

void CPUModule::displayModuleInfo()
{
	char buffer[128];
	char buf[100];
	size_t bufferlen = 128;
	std::string cpuInfo;

	sysctlbyname("machdep.cpu.brand_string", &buffer, &bufferlen, NULL, 0);
	FILE *fTop = popen( "top -l 1 | grep \"CPU usage\"", "r");
	while (!feof(fTop))
	{
		if (fgets(buf, 100, fTop) != NULL)
			cpuInfo += buf;
	}
	pclose(fTop);
	mvprintw(17, 0, "{-----------------------CPU------------------------}");
	mvprintw(18, 0, "Model:     %s", buffer);
	mvprintw(19, 0, "%s", cpuInfo.c_str());
	mvprintw(20, 0, "{--------------------------------------------------}");

}