#include <iostream>
#include "lib2.h"

void lib1()
{
  std::cout << "Hi from lib1" << std::endl;
  lib2();
}

