/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:56:53 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/28 19:29:41 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "Weapon.hpp"

class HumanB {
  private:
    std::string name_;
    Weapon*     weapon_;
  public:
    HumanB(const std::string& name, Weapon* weapon = NULL);
    ~HumanB();

    void setWeapon(Weapon& weapon);
    void attack();
};

