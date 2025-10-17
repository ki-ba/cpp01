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
	this->_name = "boring nameless zombie";
}

Zombie::Zombie(const std::string& zombie_name)
{
	std::cout << "[Zombie] String constructor called" << std::endl;
	this->_name = zombie_name;
}

Zombie::Zombie(const Zombie &other)
	: _name(other._name)
{
	std::cout << "[Zombie] Copy constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " : *dies*" << std::endl;
}

void	Zombie::operator=(const Zombie &other)
{
	this->_name = other._name;
}

void	Zombie::setName(const std::string& newName)
{
	this->_name = newName;
}

void Zombie::announce(void) const
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
