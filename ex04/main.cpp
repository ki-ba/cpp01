/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:17:48 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/15 11:48:00 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char *argv[])
{
	if (argc < 4)
	{
		std::cout << "usage : ./notsed filename s1 s2" << std::endl;
		return (1);
	}

	std::string	sub;
	int		n = 1;
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream	f(argv[1], std::fstream::in);
	if (!f.good())
	{
		std::cout << "error : file " << argv[1] << " could not be opened" << std::endl;
		return (1);
	}

	std::string	filename = argv[1];
	std::ofstream	f2((filename + ".replace").c_str(), std::fstream::out);

	if (!f.good())
	{
		std::cout << "error : "<< argv[1] << ".replace could not be opened" << std::endl;
	}

	while (std::getline(f, sub))
	{
		while (s1 != s2 && (n = sub.find(s1)) >= 0)
		{
			sub.erase(n, s1.length());
			sub.insert(n, s2);
		}
		f2 << sub << std::endl;
	}
}
