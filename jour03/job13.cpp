#include <cstddef>
#include <cstring>
#include <iostream>

int is_tab_sorted(int *tab3, int tab1_len, int tab2_len)
{
    size_t i = 0;

    while (tab1_len + tab2_len > i)
    {
        if (i)
        {
            if (tab3[i - 1] > tab3[i])
                return 0;
        }
        i++;
    }

    return 1;
}

void fill_tab(int *tab3, int *tab1, int *tab2, int tab1_len, int tab2_len)
{
    size_t i = 0;

    memmove(tab3, tab1, tab1_len);
    while (i < tab2_len)
    {
        tab3[i + tab1_len] = tab2[i];
        i++;
    }

}

int main(void)
{
    int tab1[] = {1, 3, 5, 7, 9};
    int tab2[] = {3, 6, 10, 12};
    int tab1_len = 5;
    int tab2_len = 4;
    int tab3[tab1_len + tab2_len];

    fill_tab(tab3, tab1, tab2, tab1_len, tab2_len);
    while (!is_tab_sorted(tab3, tab1_len, tab2_len))
    {
        size_t i = 0;
        int tmp = 0;

        while (tab1_len + tab2_len > i)
        {
            if (i)
            {
                if (tab3[i - 1] > tab3[i])
                {
                    tmp = tab3[i];
                    tab3[i] = tab3[i - 1];
                    tab3[i - 1] = tmp; 
                }
            }
            i++;
        }
    }
    

    for (size_t k = 0; k < 8; k++)
    {
        std::cout << tab3[k] << std::endl;
    }

    return 0;
}
