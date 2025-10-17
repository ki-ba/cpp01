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

	HumanA bob("Bob", w1);
	HumanB jim("Jim");

	bob.attack();
	w1.setType("shiny gold-infused sword");
	bob.attack();

	jim.setWeapon(w2);
	jim.attack();
	w2.setType("enormous two-handed battleaxe");
	jim.attack();
}
