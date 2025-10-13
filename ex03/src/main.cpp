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
	Weapon w1 = Weapon("iron sword");
	Weapon w2 = Weapon("iron battleaxe");

	HumanA bob("Bob", w1);
	HumanB jim("Jim");

	bob.attack();
	w1.setType("diamond sword");
	bob.attack();

	jim.setWeapon(w2);
	jim.attack();
	w2.setType("diamond battleaxe");
	jim.attack();
}
