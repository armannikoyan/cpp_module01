/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:41:25 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/22 20:14:56 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie
{
  private:
    std::string name;

  public:
    Zombie();
    ~Zombie();
    Zombie(const Zombie&);
    Zombie& operator=(const Zombie&);

    void set_name(const std::string);

    void announce(void);
};

Zombie* zombieHorde(int N, std::string name);
