/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:23:50 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/02 18:30:01 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int N, std::string name);
#define HORDE_SIZE 10

int	main(void)
{
	Zombie *horde = NULL;
	try
	{
		horde = zombieHorde(HORDE_SIZE, "hordeling");
	}
	catch(std::bad_alloc& ba)
	{
		std::cout <<"bad_alloc caught:"<< ba.what() << std::endl;
		return (1);
	}

	for (int i = 0; i < HORDE_SIZE; ++i)
		horde[i].announce();

	delete[] horde;
	return (0);
}
