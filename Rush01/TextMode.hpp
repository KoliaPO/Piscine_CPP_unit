/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextMode.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 13:44:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/15 13:44:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXTMODE_HPP
# define TEXTMODE_HPP

# include "IMonitorDisplay.hpp"
# include "CPUModule.hpp"
# include "DateModule.hpp"
# include "NetworkModule.hpp"
# include "OSModule.hpp"
# include "RAMModule.hpp"
# include "User.hpp"

class TextMode : public IMonitorDisplay
{
private:

	WINDOW *_window;
	int _in;
	TextMode(TextMode const &obj);
	TextMode &operator=(TextMode const &obj);
public:

	TextMode();
	~TextMode();
	virtual void initNcurses();
	void createModule(char **av);
};


#endif
