#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 3)
        return 1;

    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    int tmp = 0;

    std::cout << n << m << std::endl;

    tmp = n;
    n = m;
    m = tmp;

    std::cout << n << m << std::endl;
    return 0;
}

