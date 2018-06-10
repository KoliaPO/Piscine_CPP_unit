/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSModule.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 14:41:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/14 14:41:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OSMODULE_H
# define OSMODULE_H
# include "IMonitorModule.hpp"

class OSModule : public IMonitorModule
{
private:
		OSModule &operator=(OSModule const &ob);
		OSModule(OSModule const &OSModule);

public:
	OSModule();
	~OSModule();
	virtual void displayModuleInfo();

};
#endif