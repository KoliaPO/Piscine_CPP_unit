/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworModule.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 16:32:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/14 16:32:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NetworkModule.hpp"

NetworkModule::NetworkModule()
{
}

NetworkModule::~NetworkModule()
{
}

void NetworkModule::displayModuleInfo()
{
	void * oldp[1024];
	size_t oldlen = sizeof(struct ipstat);
	size_t newlen = 0;
	void * newp = NULL;

	sysctlbyname("net.inet.ip.stats", oldp, &oldlen, newp, newlen);

	struct ipstat * g = reinterpret_cast<struct ipstat *>(oldp);
	mvprintw(27, 0, "{-----------------------NETWORK--------------------}");
	mvprintw(28, 0, "IP packets received:        %d", g->ips_total);
	mvprintw(29, 0, "IP packets generated here:  %d", g->ips_localout);
	mvprintw(30, 0, "{--------------------------------------------------}");
}