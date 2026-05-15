#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;

    std::string string = argv[1];
    std::string string2 = "Bonjour";
    size_t i = 0;

    while (string[i])
    {
        if (string[i] < string2[i])
        {
            std::cout << string << std::endl << string2 << std::endl;
            return 0;
        }
        else if (string[i] > string2[i])
        {
            std::cout << string2 << std::endl << string << std::endl;
            return 0;
        }
        i++;
    }
    std::cout << string << std::endl << string2 << std::endl;
    return 0;
}
