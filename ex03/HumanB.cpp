/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:45:36 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/13 11:53:35 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

Weapon *HumanB::getWeapon() const
{
	return (this->_weapon);
}

void HumanB::attack()
{
		std::cout << this->_name << " attacks with their ";
	if (!this->_weapon)
		std::cout << "...bare hands, doing little to no damage";
	else
		std::cout << this->_weapon->getType();
	std::cout << std::endl;
}
