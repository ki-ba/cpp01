/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:19:30 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/13 11:28:43 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	Weapon		&_weapon;
	std::string	_name;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	Weapon getWeapon();
	void attack();
};

#endif
