/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:56:13 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/28 19:29:31 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "Weapon.hpp"

class HumanA {
  private:
    std::string name_;
    Weapon&     weapon_;
  public:
    HumanA(const std::string& name, Weapon& weapon);
    ~HumanA();

    void attack();
};

