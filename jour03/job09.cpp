#include <iostream>

bool func(char *str1, char *str2)
{
    size_t i = 0;
    size_t j = 0;

    while (str2[i])
    {
        j = 0;
        while (str1[j + i] && str1[j + i] == str2[j + i])
            j++;

        if (j)
        {
            if (j == strlen(str1))
                return true;
            i += j;
        }
        i++;
    }

    return false;
}

int main(int argc, char **argv)
{
    if (argc != 3)
        return 1;

    int a = 0;

    std::cout << func(argv[1], argv[2]) << std::endl;
    
    return 0;
}
