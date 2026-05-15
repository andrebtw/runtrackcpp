#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        return 1;

    int sum = 0;

    for (size_t i = 1; i < argc; i++)
    {
        if (atoi(argv[i]) % 2 == 0)
            sum += atoi(argv[i]);
    }

    std::cout << sum << std::endl;
    return 0;
}
