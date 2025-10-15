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

int main() {
	Harl h;
	h.complain("debug");
	h.complain("info");
	h.complain("warning");
	h.complain("error");
	h.complain("unknown");
	h.complain("0");
	return 0;
}
