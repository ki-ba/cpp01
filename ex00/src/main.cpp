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

Zombie *newZombie(std::string name); // defined in newZombie.cpp
void randomChump(std::string name); // defined in randomChump.cpp

int	main(void)
{
	Zombie	*z = newZombie("Fred the undead");
	z->announce();

	Zombie boringZombie;
	boringZombie.announce();

	randomChump("Edwin the unbreathin'");
	delete z;
	return (0);
}
