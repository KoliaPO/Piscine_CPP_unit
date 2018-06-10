/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworModule.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 16:32:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/14 16:32:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef NETWORMODULE_HPP
# define NETWORMODULE_HPP
# include "IMonitorModule.hpp"
class NetworkModule : public IMonitorModule
{
private:
	NetworkModule(NetworkModule const &obj);
	NetworkModule &operator=(NetworkModule const &obj);

public:
	NetworkModule();
	~NetworkModule();
	virtual void displayModuleInfo();

};


#endif
