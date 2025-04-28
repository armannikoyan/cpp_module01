/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:18:36 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/28 17:57:18 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug( void )
{
  std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info( void )
{
  std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning( void )
{
  std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}
void Harl::error( void )
{
  std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain( std::string level )
{
  void (Harl::*functionPTRS[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  std::string opts[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  unsigned short i = 0;
  for (; i < 4; ++i)
  {
    if (opts[i] == level)
      break;
  }
  switch(i)
  {
    case(0):
      (this->*functionPTRS[0])();
      __attribute__ ((fallthrough));
    case(1):
      (this->*functionPTRS[1])();
      __attribute__ ((fallthrough));
    case(2):
      (this->*functionPTRS[2])();
      __attribute__ ((fallthrough));
    case(3):
      (this->*functionPTRS[3])();
      break;

    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
      break;
  }
}
