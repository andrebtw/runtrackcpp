#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    int entier = atoi(argv[1]);

    if (entier % 2 == 0)
        std::cout << "Nombre pair" << std::endl;
    else
        std::cout << "Nombre impair" << std::endl;

    return 0;
}

