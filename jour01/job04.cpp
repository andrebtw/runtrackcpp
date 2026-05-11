#include <iostream>

int main(int argc, char **argv)
{
  if (argc != 3)
    return 1;
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  std::cout << a + b << std::endl;
  return 0;
}
