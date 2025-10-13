/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:28:48 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/07 14:29:28 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(void)
{
	std::string *stringPTR;
	std::string str;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";

	std::cout << std::endl << "ADDRESSES : " << std::endl;
	std::cout << "string : " << &str << std::endl;
	std::cout << "pointer : " << &stringPTR << std::endl;
	std::cout << "reference : " << &stringREF << std::endl;
	std::cout <<  std::endl << "VALUES : " << std::endl;
	std::cout << "string : " << str << std::endl;
	std::cout << "pointer : " << stringPTR << std::endl;
	std::cout << "reference : " << stringREF << std::endl;
}
