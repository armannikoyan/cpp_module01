/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:53:07 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/27 20:33:46 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HumanA.cpp
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& weapon)
  : name_(name)
  , weapon_(weapon)   // bind reference here
{}

HumanA::~HumanA() {}

void HumanA::attack() {
  std::cout << name_
            << " attacks with their "
            << weapon_.getType()
            << std::endl;
}

