#include <iostream>
#include <stdio.h>

/*
 *Écrire un programme en C++ qui affiche la table de multiplication d'un entier
donné par l'utilisateur.
*/
int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    int entier = atoi(argv[1]);

    for (size_t i = 1; i <= entier; i++)
    {
        std::cout << "Table de " << i << ": ";

        for (size_t j = 1; j <= 10; j++)
            std::cout << i << "x" << j << "=" << i*j << "; ";

        std::cout << std::endl;
    }

    return 0;
}

