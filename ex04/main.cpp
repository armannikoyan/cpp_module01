/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikoyan <anikoyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:55:43 by anikoyan          #+#    #+#             */
/*   Updated: 2025/04/28 18:10:40 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <ios>
#include <string>

int main(int argc, char **argv)
{
  if (argc != 3 && argc != 4)
  {
    std::cerr << "Usage: " << argv[0] << " filename replaceable [replacement]\n";
    return 1;
  }

  std::ifstream input_file(argv[1]);
  if (!input_file)
  {
    std::cerr << "Error: Could not open input file.\n";
    return 1;
  }

  std::ofstream output_file((std::string(argv[1]) + ".replace").c_str());
  if (!output_file)
  {
    std::cerr << "Error: Could not create output file.\n";
    return 1;
  }

  std::string replaceable = argv[2];
  std::string replacement = (argc == 4) ? argv[3] : "";
  if (replaceable.empty())
  {
    std::cerr << "Error: Replaceable string cannot be empty.\n";
    return 1;
  }

  std::string content(
      (std::istreambuf_iterator<char>(input_file)),
      std::istreambuf_iterator<char>()
      );
  input_file.close();

  std::string result;
  size_t start_pos = 0;
  size_t found_pos;

  while ((found_pos = content.find(replaceable, start_pos)) != std::string::npos)
  {
    result.append(content, start_pos, found_pos - start_pos);
    result += replacement;
    start_pos = found_pos + replaceable.length();
  } 
  result.append(content, start_pos, std::string::npos);

  output_file << result;
  output_file.close();

  return 0;
}
