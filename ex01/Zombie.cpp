/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:41:34 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/27 02:59:17 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::~Zombie()
{
  std::cout << "destroyed: " << name << std::endl;
}

Zombie::Zombie(const Zombie& other)
  : name(other.name) {}

Zombie& Zombie::operator=(const Zombie& other)
{
  if (this != &other)
    name = other.name;
  return *this;
}

void Zombie::set_name(const std::string zombie_name)
{
  name = zombie_name;
}

void Zombie::announce()
{
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
