#include <iostream>

int main(void)
{
    int nb;
    bool running = true;

    while (running)
    {
        std::cout << "Donnez un nombre positif: ";
        std::cin >> nb;

        if (!nb)
            exit(0);
        else if (nb < 0)
            std::cout << "svp positif" << std::endl;
        else
            std::cout << "Sa racine carrée est: " << std::sqrt(nb) << std::endl;
    }

    return 0;
}
