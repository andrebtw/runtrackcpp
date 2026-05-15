#include <cctype>
#include <iostream>

int main(void)
{
    char str[] = "vive la plateforme !";

    size_t i = 0;
    while (str[i])
    {
        if (isalpha(str[i]))
            str[i] = str[i] - 32;
        i++;
    }
    std::cout << str << std::endl;

    return 0;
}
