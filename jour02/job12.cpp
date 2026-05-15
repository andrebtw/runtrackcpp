#include <cstdint>
#include <iostream>

double serie_harmonique(int n)
{
    double nb = 1;
    int inc = 2;

    while (n != 1)
    {
        nb += (double)1 / inc;
        inc++;
        n--;
    }
    return nb;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;

    int n = atoi(argv[1]);
    std::cout << serie_harmonique(n) << std::endl;
}
