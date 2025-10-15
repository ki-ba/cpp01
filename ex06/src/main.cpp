/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:26:23 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/15 14:26:30 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
	Harl h;
	std::string level = argv[1];
	if (argc != 2) {
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
		return 1;
	}
	switch (h.levelToInt(level)) {
		case 0:
			h.complain("DEBUG");
		case 1:
			h.complain("INFO");
		case 2:
			h.complain("WARNING");
		case 3:
			h.complain("ERROR");
			break;
		default:
			std::cout << "[mumbling and side-eying]" << std::endl;
			break;
	}
		return 0;
}
