#include <cstddef>
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;

    for (size_t i = 0; argv[1][i] != '\0'; i++)
        std::cout << argv[1][strlen(argv[1]) - i];

    std::cout << std::endl;
    return 0;
}
