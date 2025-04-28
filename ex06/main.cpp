/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:18:27 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/28 19:30:06 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
  Harl	harl;
  
  if (argc != 2)
  {
    std::cout << "Error: " << argv[0] << "[DEBUG/INFO/WARNING/ERROR/*]";
    return 1;
  }
  harl.complain(std::string(argv[1]));
  return 0;
}
