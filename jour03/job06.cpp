#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 11)
        return 1;

    int T[10];

    for (size_t i = 0; i < 10; i++)
    {
        T[i] = atoi(argv[i + 1]);
    }

    for (size_t i = 0; i < 10; i++)
    {
        if (T[i] >= 5)
            std::cout << T[i] << "; ";
    }
    std::cout << std::endl;
    return 0;
}
