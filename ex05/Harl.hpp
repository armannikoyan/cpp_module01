/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:18:43 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/28 17:37:27 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Harl
{
  private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

  public:
    Harl();
    ~Harl();
    void complain( std::string level );
};
