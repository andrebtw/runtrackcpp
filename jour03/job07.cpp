#include <climits>
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 11)
        return 1;

    int T[10];
    int max = INT_MIN;

    for (size_t i = 0; i < 10; i++)
    {
        T[i] = atoi(argv[i + 1]);
    }

    for (size_t i = 0; i < 10; i++)
    {
        if (T[i] >= max)
            max = T[i];
    }
    std::cout << max << std::endl;
    return 0;
}
