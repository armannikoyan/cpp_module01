/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:18:27 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/28 18:11:18 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
  Harl	harl;
  std::string input;

  do
  {
    std::cout << "Prompt [DEBUG/INFO/WARNING/ERROR/EXIT]: ";
    getline(std::cin, input);
    if (std::cin.eof() == true)
    {
      std::cerr << "^D" << std::endl;
      return 1;
    }
    harl.complain(input);
    std::cout << std::endl;
  } while (input != "EXIT");
  return 0;
}
