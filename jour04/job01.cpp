#include <iostream>

int main(void)
{
    int number = 2019;

    int *p = &number;
    std::cout << "La valeur de 'number' est: " << *p << std::endl;
    return 0;
}