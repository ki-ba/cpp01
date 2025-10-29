/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:41:11 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/13 11:56:01 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon w1 = Weapon("rusty sword");
	Weapon w2 = Weapon("rusty battleaxe");

	HumanA andrew("Andrew", w1);
	HumanB bob("Bob");

	andrew.attack();
	bob.attack();

	andrew.attack();
	w1.setType("shiny gold-infused sword");
	andrew.attack();

	bob.setWeapon(w2);
	bob.attack();
	w2.setType("enormous two-handed battleaxe");
	bob.attack();
}
