//  This file is part of My First Evolutionary Algorithm
//  Copyright (C) Matthew Andres Moreno, 2020.
//  Released under MIT license; see LICENSE

#include <iostream>

#include "base/vector.h"
#include "config/command_line.h"

#include "../evolve.h"

// This is the main function for the NATIVE version of My First Evolutionary Algorithm.

int main(int argc, char* argv[])
{
  emp::vector<std::string> args = emp::cl::args_to_strings(argc, argv);

  evolve();

  std::cout << "evolved, yo!" << std::endl;
}
