#include <iostream>
#include <stdio.h>

int main(int argc, char **argv)
{
  int n = atoi(argv[1]);
  for (size_t i = 0; i < n; i++)
  {
    std::cout << "Hello World" << std::endl;
  }
  return 0;
}
