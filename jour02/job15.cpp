#include <cmath>
#include <iostream>

/*
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
F(n) = F(n-1) + F(n-2), avec F(0) = 0 et F(1) = 1.
*/

void fibonacci(int limit)
{
    int a;
    int b;
    int tmp;

    while (a <= limit)
    {
        
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;

    int limit = atoi(argv[1]);
    fibonacci(limit);
    std::cout << std::endl;
    return 0;
}
