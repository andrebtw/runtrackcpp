#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 3)
        return 1;

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if (a < b)
    {
        for (; a <= b; a++)
        {
            std::cout << a << "; ";
        }
    }
    else
    {
        for (; b <= a; a--)
        {
            std::cout << a << "; ";
        }
    }
    std::cout << std::endl;
    return 0;
}
