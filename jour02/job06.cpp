#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;

    int n = atoi(argv[1]);

    for (size_t i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
            std::cout << i << " est un multiple de 3" << std::endl;
        if (i % 5 == 0)
            std::cout << i << " est un multiple de 5" << std::endl;
    }
    return 0;
}
