#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    int entier = atoi(argv[1]);

    if (entier % 4 == 0)
    {
        if (entier % 100 == 0)
            std::cout << "Annee non bissextile." << std::endl;
        else
            std::cout << "Annee bissextile." << std::endl;
    }
    else
        std::cout << "Annee non bissextile." << std::endl;
    return 0;
}

