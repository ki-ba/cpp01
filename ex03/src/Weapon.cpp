/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:49:31 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/13 11:48:16 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

std::string Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(std::string newType)
{
	// std::cout << "weapon had type " << this->getType() << std::endl;
	this->type = newType;
	// std::cout << "weapon has type " << this->getType() << std::endl;
}
