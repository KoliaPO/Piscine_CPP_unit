/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+        +:+     */
/*   By: myprosku <myprosku@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 13:27:00 by myprosku          #+#    #+#             */
/*   Updated: 2018/04/04 13:27:00 by myprosku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace(std::string file, std::string s1, std::string s2)
{
	std::ifstream 	ifs(file);
	std::ofstream	ofs;
	std::string		temp;
	std::string		s3;
	int				nubRead;

	if (!ifs.is_open())
	{
		std::cout << "Error open files !" << std::endl;
		std::exit(0);
	}
	else
	{
		ofs.open(file + ".replace");
		std::getline(ifs, s3, '\0');
		if (s1 != s2)
			while((nubRead = s3.find(s1)) >= 0)
				s3.replace(nubRead, s1.length(), s2);
		ofs << s3;
		ofs.close();
		ifs.close();
	}
}

int 	main(int argc, char **argv)
{
	if (argc < 4)
	{
		std::cout << "Input norm parametrs !" << std::endl;
	}
	else if (argv[1][0] == '\0' || argv[2][0] == '\0' || argv[3][0] == '\0')
		std::cout << "Input norm parametrs !" << std::endl;
	else
		replace(argv[1], argv[2], argv[3]);
	return (0);
}