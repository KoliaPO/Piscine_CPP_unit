/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RAMModule.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 16:06:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/14 16:06:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cinttypes>
#include "RAMModule.hpp"

RAMModule::RAMModule()
{
}

RAMModule::~RAMModule()
{
}

void RAMModule::displayModuleInfo()
{
	long long _memsize;
	long _ncpu;
	size_t len;
	size_t len1;
	_memsize = sizeof(len);

	sysctlbyname("hw.memsize", &_memsize, &len, NULL, 0);
	_ncpu = sizeof(len1);
	sysctlbyname("hw.ncpu", &_ncpu, &len1, NULL, 0);
	mvprintw(22, 0, "{-----------------------RAM------------------------}");
	mvprintw(23, 0, "Ram:        %lld", _memsize);
	mvprintw(23, 22, "KB");
	mvprintw(24, 0, "number CPU: %ld", _ncpu);
	mvprintw(25, 0, "{--------------------------------------------------}");


}