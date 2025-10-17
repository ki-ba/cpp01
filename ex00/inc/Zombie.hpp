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
    std::string _name;

public:
    Zombie();
    Zombie(const std::string& name);
    Zombie(const Zombie& other);
    void operator=(const Zombie& other);
    ~Zombie();
    std::string getName() const;
    void setName(const std::string& newName);

    void announce() const;
};

#endif // ZOMBIE_HPP
