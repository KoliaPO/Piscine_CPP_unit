/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextMode.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 13:44:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/15 13:44:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/ttycom.h>
#include <sys/ioctl.h>
#include "TextMode.hpp"

TextMode::TextMode()
{
}

TextMode::~TextMode()
{
}

void TextMode::initNcurses()
{
	initscr();
	noecho();
	curs_set(false);
	cbreak();
	keypad(stdscr, true);
	nodelay(stdscr, TRUE);
	struct winsize size;
	ioctl(0, TIOCGWINSZ, &size);
	_in = ERR;
	_window = newwin(500, 500, 0, 0);
	wrefresh(_window);

}

void TextMode::createModule(char **av)
{
	OSModule os;
	DateModule date;
	User user;
	CPUModule cpu;
	RAMModule ram;
	NetworkModule net;
	int i = 1;
	while(1)
	{
		char **temp = av;
		i = 1;
		while (temp[i])
		{
			if (temp[i][0] == '1')
				date.displayModuleInfo();
			if (temp[i][0] == '2')
				os.displayModuleInfo();
			if (temp[i][0] == '3')
				user.displayModuleInfo();
			if (temp[i][0] == '4')
				cpu.displayModuleInfo();
			if (temp[i][0] == '5')
				ram.displayModuleInfo();
			if (temp[i][0] == '6')
				net.displayModuleInfo();
			i++;
		}
		_in = getch();
		if (_in == 'q')
		{
			endwin();
			break;
		}
	}
}
