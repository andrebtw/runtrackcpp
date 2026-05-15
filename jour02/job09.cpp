#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 3)
        return 1;

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int entier;

    std::cout << "Entier: ";
    std::cin >> entier;
    std::cout << std::endl;

    if ((entier >= a && entier <= b) && (a < b))
        std::cout << "GAGNE" << std::endl;
    else
        std::cout << "PERDU" << std::endl;

    return 0;
}
