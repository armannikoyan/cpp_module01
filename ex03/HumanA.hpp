/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:56:13 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/27 20:33:21 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HumanA.hpp
#pragma once
#include <string>
#include "Weapon.hpp"

class HumanA {
  private:
    std::string name_;
    Weapon&     weapon_;   // now a reference
  public:
    HumanA(const std::string& name, Weapon& weapon);
    ~HumanA();

    void attack();
};

