#include <cmath>
#include <iostream>

size_t nb_length(int n)
{
    int length = 0;
    while (n)
    {
        n = n / 10;
        length++;
    }
    return length;
}

// 153 (3 chiffres) : 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 ✓
bool is_narcissique(int n)
{
    int saved_n = n;
    int number = 0;

    while (n)
    {
        number += std::pow((n % 10), nb_length(saved_n));
        n = n / 10;
    }

    if (number == saved_n)
        return true;
    return false;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;

    int n = atoi(argv[1]);
    std::cout << is_narcissique(n) << std::endl;
    return 0;
}
