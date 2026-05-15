#include <cstddef>
#include <iostream>

void mult(int n)
{
    if (n < 10)
        std::cout << n << "  I ";
    else
        std::cout << n << " I ";

    for (size_t i=1; i <= 10; i++)
    {
        std::cout << n * i;
        if (n * i < 10)
            std::cout << "   ";
        else
            std::cout << "  ";
    }
    std::cout << std::endl;
}

int main(void)
{
    std::cout << "   I 1   2   3   4   5   6   7   8   9   10" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    for (size_t i = 1; i <= 10; i++)
    {
        mult(i);
    }
}
