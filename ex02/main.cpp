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
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;


	std::cout << std::endl << "ADDRESSES :" << std::endl;

	std::cout << "address of string :	" << &str << std::endl;
	std::cout << "address held by ptr :	" << stringPTR << std::endl;
	std::cout << "address held by ref :	" << &stringREF << std::endl;

	std::cout <<  std::endl << "VALUES : " << std::endl;

	std::cout << "value of the string str:	" << str << std::endl;
	std::cout << "pointed to by stringPTR :	" << *stringPTR << std::endl;
	std::cout << "pointed to by stringREF:	" << stringREF << std::endl;
}
