/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:46:43 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/27 14:20:12 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon
{
  private:
    std::string type;

  public:
    Weapon(const std::string&);
    ~Weapon();
    Weapon(const Weapon&);
    Weapon& operator=(const Weapon&);

    const std::string& getType(void) const;
    void setType(const std::string&);
};
