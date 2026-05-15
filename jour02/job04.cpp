#include <cctype>
#include <cstddef>
#include <iostream>

int main(void)
{
    double nb;
    double nb2;
    bool running = true;
    std::string op;

    while (running)
    {
        nb = 0;
        nb2 = 0;
        std::cout << "Nombre: ";
        std::cin >> nb;
        std::cout << std::endl;

        std::cout << "Operateur: ";
        std::cin >> op;
        std::cout << std::endl;

        std::cout << "Nombre 2: ";
        std::cin >> nb2;
        std::cout << std::endl;

        switch(op[0])
        {
            case '+' : 
                std::cout << nb + nb2 << std::endl;
                break;
            case '-' :
                std::cout << nb - nb2 << std::endl;
                break;
            case '*' :
                std::cout << nb * nb2 << std::endl;
                break;
            case '/' :
                std::cout << nb / nb2 << std::endl;
                break;
            case 'q' :
                exit(0);
            default : std::cout << "Mauvais operateur" << std::endl; 
        }
    }

    return 0;
}
