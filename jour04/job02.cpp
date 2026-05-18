#include <iostream>

int main(void)
{
    int a = 10;
    int b = 20;
    int tmp;

    int *p1 = &a;
    int *p2 = &b;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;

    std::cout << *p1 << "; " << *p2 << std::endl;
    return 0;
    
}
