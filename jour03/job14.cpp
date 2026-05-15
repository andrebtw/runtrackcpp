#include <iostream>

int main(void)
{
    char tab[6][10] = {"radar", "hello", "lvel", "stats", "world", NULL};

    size_t i = 0;
    size_t j = 0;

    while (i < 5)
    {
        j = 0;
        bool is_palindrome = false;

        while (j < strlen(tab[i]) / 2)
        {
            if (tab[i][j] != tab[i][strlen(tab[i]) - 1 - j])
                break;
            j++;
            if (j == strlen(tab[i]) / 2)
                is_palindrome = true;
        }

        if (is_palindrome)
            std::cout << tab[i] << std::endl;
        i++;
    }

    return 0;
}