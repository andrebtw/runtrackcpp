#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;

    int n = atoi(argv[1]);
    if (n > 5)
    {
        for (size_t i = 5; i <= n; i++)
        {
            std::cout << i << "^3" << "=" << i * i * i << std::endl;
        }
    }
    else
    {
        for (size_t i = 5; i >= n; i--)
        {
            if (!i)
            {
                std::cout << "Pas en dessous de 0!!" << std::endl;
                return 1;
            }
            std::cout << i << "^3" << "=" << i * i * i << std::endl;
        }
    }
    return 0;
}
