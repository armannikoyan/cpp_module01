/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:49:45 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/27 20:14:58 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include <iostream>

Weapon::Weapon(const std::string& n_type)
  : type(n_type)
{
}
Weapon::~Weapon() {}

Weapon::Weapon(const Weapon& other)
{
  type = other.type;
}

const std::string& Weapon::getType() const
{
  return type;
}

void Weapon::setType(const std::string& n_type)
{
  type = n_type;
}
