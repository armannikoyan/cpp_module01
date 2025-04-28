/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:18:27 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/28 18:01:59 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
  Harl	harl;
  
  if (argc != 2)
  {
    std::cout << "Error: " << argv[0] << "[DEBUG/INFO/WARNING/ERROR/*]";
    return EXIT_FAILURE;
  }
  harl.complain(std::string(argv[2]));
  return EXIT_SUCCESS;
}
