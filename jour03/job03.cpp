#include <cctype>
#include <cstring>

int main(int argc, char **argv)
{
    if (argc != 3)
        return -1;

    size_t i = 0;

    if (strlen(argv[1]) != strlen(argv[2]))
        return 1;

    while (argv[1][i])
    {
        if (argv[1][i] != argv[2][i])
            return 1;
        i++;
    }
    return 0;
}
