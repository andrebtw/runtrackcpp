#include <cstring>
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;

    char *str = argv[1];
    size_t i = 0;
    char tmp;

    while (i / 2 < strlen(str))
    {
        tmp = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = tmp;
        i++;
    }

    std::cout << argv[1] << std::endl;
    return 0;
}