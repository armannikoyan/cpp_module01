/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:41:07 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/27 02:58:51 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
  const int N = 10;
  Zombie *my_zombies = zombieHorde(N, "Arman");

  for (int i = 0; i <= N; ++i)
    my_zombies[i].announce();
  delete[] my_zombies;
  return 0;
}
