/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateModule.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 13:26:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/14 13:26:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATEMODULE_H
# define DATEMODULE_H

# include "IMonitorModule.hpp"


class DateModule : public IMonitorModule
{
private:
	DateModule(DateModule const &obj);
	DateModule &operator=(DateModule const &obj);

public:
	DateModule();
	~DateModule();
	virtual void displayModuleInfo();

};

#endif