/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:27:07 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/13 11:56:09 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*_weapon;
	std::string	_name;
public:
	HumanB(std::string name);
	~HumanB();
	Weapon *getWeapon() const;
	void attack();
	void setWeapon(Weapon &weapon);
};

#endif
