/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:11:11 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/02 18:29:24 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout << "[Zombie] Default constructor called" << std::endl;
}

Zombie::Zombie(const std::string& zombie_name)
{
	std::cout << "[Zombie] String constructor called" << std::endl;
	this->name = zombie_name;
}

Zombie::Zombie(const Zombie &other)
{
	std::cout << "[Zombie] Copy destructor called" << std::endl;
	this->setName(other.name);
}

Zombie::~Zombie()
{
	std::cout << "[Zombie] Default destructor called" << std::endl;
}

void	Zombie::operator=(const Zombie &other)
{
	this->name = other.name;
}

void	Zombie::setName(const std::string& newName)
{
	this->name = newName;
}

void Zombie::announce(void) const
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
