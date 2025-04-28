/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:57:44 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/28 19:29:37 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name, Weapon* weapon)
  : name_(name)
  , weapon_(weapon)
{}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon) {
  weapon_ = &weapon;
}

void HumanB::attack() {
  if (weapon_) {
    std::cout << name_
              << " attacks with their "
              << weapon_->getType()
              << std::endl;
  } else {
    std::cout << name_
              << " has no weapon to attack with."
              << std::endl;
  }
}

