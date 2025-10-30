/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:09:30 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/02 18:29:34 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
    std::string name;

public:
    // Default constructor
    Zombie();

    // Parameterized constructor
    Zombie(const std::string& name);
    // Copy constructor
    Zombie(const Zombie& other);

    // Copy assignment operator
    void operator=(const Zombie& other);

    // Destructor
    ~Zombie();

    // Getter for name
    std::string getName() const;

    // Setter for name
    void setName(const std::string& newName);

    // Member function to announce the zombie
    void announce() const;
};

#endif // ZOMBIE_HPP
