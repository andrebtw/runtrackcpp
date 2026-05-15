#include <cctype>
#include <cstring>
#include <iostream>

int main(void)
{
    std::string str = "vive la plateforme !";
    char voyelles[] = "aeiouy";

    size_t i = 0;
    while (str[i])
    {
        if (strchr(voyelles, str[i]))
            str.erase(i, 1);
        i++;
    }
    std::cout << str << std::endl;

    return 0;
}
