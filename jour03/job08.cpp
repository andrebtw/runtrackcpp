#include <cstddef>
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;

    char tab[strlen(argv[1]) + 1];

    size_t i = 0;

    while (argv[1][i])
    {
        tab[i] = argv[1][i];
        i++;
    }

    tab[i] = '\0';
    std::cout << tab << std::endl;
    return 0;
}
