/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:56:53 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/27 20:33:57 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HumanB.hpp
#pragma once
#include <string>
#include "Weapon.hpp"

class HumanB {
  private:
    std::string name_;
    Weapon*     weapon_;   // pointer, can be null
  public:
    HumanB(const std::string& name, Weapon* weapon = nullptr);
    ~HumanB();

    void setWeapon(Weapon& weapon);
    void attack();
};

