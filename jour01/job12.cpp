#include <iostream>

#define MOYENNE 5

int main(int argc, char **argv)
{
    if (argc != 6)
        return 1;

    int array[7];
    for (size_t i = 1; i <= 5; i++)
    {
        array[i - 1] = atoi(argv[i]);
        array[MOYENNE] = array[MOYENNE] + array[i - 1];
    }
    std::cout << array[MOYENNE] / 5 << std::endl;
    return 0;
}

