#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 4)
        return 1;

    int array[3];
    array[0] = atoi(argv[1]);
    array[1] = atoi(argv[2]);
    array[2] = atoi(argv[3]);
    int highest_nb = array[0];

    for (size_t i = 1; i < 3; i++)
    {
        if (array[i] > highest_nb)
            highest_nb = array[i];
    }
    std::cout << highest_nb << std::endl;
    return 0;
}

