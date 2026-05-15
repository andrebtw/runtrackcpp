#include <iostream>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;

    int lives = atoi(argv[1]);
    int secret_nb = rand() % 100;
    int user_input = 0;

    while (lives)
    {
        std::cout << "Nombre: ";
        std::cin >> user_input;
        std::cout << std::endl;
    
        if (user_input == secret_nb)
        {
            std::cout << "GAGNE!" << std::endl;
            return 0;
        }
        else if (user_input > secret_nb)
        {
            std::cout << "trop grand" << std::endl;
        }
        else if (user_input < secret_nb)
        {
            std::cout << "trop petit" << std::endl;
        }
        lives--;
    }
    std::cout << "Perdu ! le nombre etait: " << secret_nb << std::endl;
    return 0;
}
