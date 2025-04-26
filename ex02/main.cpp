/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 03:00:19 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/27 03:11:38 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "Memory address of the string variable " << &str << std::endl;
  std::cout << "Memory address held by stringPTR " << stringPTR << std::endl;
  std::cout << "The memory address held by stringREF " << &stringREF << std::endl;

  std::cout << "The value of the string variable " << str << std::endl;
  std::cout << "The value pointed to by stringPTR " << *stringPTR << std::endl;
  std::cout << "The value pointed to by stringREF " << stringREF << std::endl;
}
