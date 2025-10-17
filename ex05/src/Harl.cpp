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
#include "stdio.h"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "[DEBUG]		Let me guess… someone stole your sweetroll." << std::endl;
}

void Harl::info()
{
	std::cout << "[INFO]		I used to be an adventurer like you, then I took an arrow in the knee." << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING]	Disrespect the law, and you disrespect me." << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR]		You have committed crimes against Skyrim and her people. What say you in your defense?" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string possibleLevels[4] = {"debug", "info", "warning", "error"};
	void (Harl::*funcPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; ++i)
	{
		if (level == possibleLevels[i])
		{
			(this->*funcPtr[i])();
			return ;
		}
	}
	// std::cout << level << " : no such level." << std::endl;
}
