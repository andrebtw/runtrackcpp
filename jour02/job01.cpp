#include <iostream>

int main(void)
{
    int n = 0;

    do
    {
        std::cout << "donnez un nombre > 0: ", std::cin >> n;
    }
    while (n <= 0);

    return 0;
}
