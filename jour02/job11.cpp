#include <cstdint>
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;

    int n = atoi(argv[1]);
    uint64_t factorielle = n;

    while (n != 1)
    {
        n = n - 1;
        factorielle = factorielle * n;
    }
    std::cout << factorielle << std::endl;
    return 0;
}
