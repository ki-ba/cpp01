/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:03:40 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/15 12:06:01 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
class Harl
{
private:
	void debug();
	void info();
	void warning();
	void error();

public:
	void complain(std::string level);
	Harl();
	~Harl();

};
#endif
