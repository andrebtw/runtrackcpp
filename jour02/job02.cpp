#include <iostream>

int main(void)
{
    int n;
    std::cin >> n;
    switch(n)
    {
        case 0 : std::cout << "Nul\n";
        case 1 :
        case 2 : std::cout << "Petit\n";
                            break;
        case 3 :
        case 4 :
        case 5 : std::cout << "Moyen\n";
        default : std::cout << "Grand\n";
    }
}

/*
andre@andres-MacBook-Air ~/D/r/jour02 (master)> ./a.out 
0
Nul
Petit
andre@andres-MacBook-Air ~/D/r/jour02 (master)> ./a.out
1
Petit
andre@andres-MacBook-Air ~/D/r/jour02 (master)> ./a.out
4
Moyen
Grand
andre@andres-MacBook-Air ~/D/r/jour02 (master)> ./a.out
10
Grand
andre@andres-MacBook-Air ~/D/r/jour02 (master)> ./a.out
-5
Grand
*/