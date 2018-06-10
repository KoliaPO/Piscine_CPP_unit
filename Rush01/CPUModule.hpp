/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPUModule.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 15:44:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/14 15:44:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPUMODULE_HPP
# define CPUMODULE_HPP

# include "IMonitorModule.hpp"

class CPUModule : public IMonitorModule
{
private:
	CPUModule(CPUModule const &obj);
	CPUModule &operator=(CPUModule const &obj);

public:
	CPUModule();
	~CPUModule();
	virtual void displayModuleInfo();

};


#endif
