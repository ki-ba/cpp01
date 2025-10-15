/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:21:44 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/15 14:23:16 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "[DEBUG]		I'm Harl. I really love bacon." << std::endl;
}

void Harl::info()
{
	std::cout << "[INFO]		I am unnhapy about the quantity of bacon in my burger." << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING]	I am very entitled and will soon become hostile." << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR]		You have made your last mistake. En guarde." << std::endl;
}

int Harl::levelToInt(std::string level) const
{
	std::string possibleLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; ++i)
	{
		if (level == possibleLevels[i])
			return (i);
	}
	return (-1);
}

void Harl::complain(std::string level)
{
	std::string possibleLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; ++i)
	{
		if (level == possibleLevels[i])
		{
			(this->*funcPtr[i])();
			return ;
		}
	}
	std::cout << level << " : no such level." << std::endl;
}
