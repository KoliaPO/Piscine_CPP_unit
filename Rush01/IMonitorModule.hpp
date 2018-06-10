/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 13:15:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/14 13:15:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORMODULE_H
# define IMONITORMODULE_H
# include <sys/types.h>
# include <sys/sysctl.h>
# include <mach/mach_types.h>
# include <sys/utsname.h>
# include <sys/resource.h>
# include <sys/param.h>
# include <sys/socketvar.h>
# include <netinet/ip.h>
# include <netinet/ip_var.h>
# include <unistd.h>
# include <iostream>
# include <ctime>
# include <ncurses.h>

class IMonitorModule
{
public:
	virtual void displayModuleInfo() = 0;
};

#endif