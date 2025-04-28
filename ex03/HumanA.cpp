/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:53:07 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/28 19:29:26 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon)
  : name_(name)
  , weapon_(weapon)
{}

HumanA::~HumanA() {}

void HumanA::attack() {
  std::cout << name_
            << " attacks with their "
            << weapon_.getType()
            << std::endl;
}

