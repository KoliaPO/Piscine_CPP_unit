/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RAMModule.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 16:06:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/14 16:06:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAMMODULE_HPP
# define RAMMODULE_HPP
# include "IMonitorModule.hpp"

class RAMModule : public IMonitorModule
{
private:
	RAMModule(RAMModule const &obj);
	RAMModule &operator=(RAMModule const &obj);

public:
	RAMModule();
	~RAMModule();
	virtual void displayModuleInfo();

};


#endif
