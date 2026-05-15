#include <iostream>

int main(void)
{
    float note = 0;

    std::cout << "Note: ";
    std::cin >> note;

    std::cout << std::endl;

    if (note > 10)
        std::cout << "Validé!" << std::endl;
    else
        std::cout << "Non validé :(" << std::endl;

    return 0;
}
