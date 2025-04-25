/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:41:07 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/22 19:53:35 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
  Zombie *my_zombie = newZombie("Po");

  my_zombie->announce();
  randomChump("Shifu");
  delete my_zombie;
  return 0;
}
