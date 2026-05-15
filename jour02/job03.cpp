#include <iostream>

using namespace std;

int main(void)
{
    int i, n, som;
    som = 0;
    i = 0;

    // while (i < 4)
    // {
    //     cout << "donnez un entier: ";
    //     cin >> n;
    //     som += n;
    //     i++;
    // }

    do 
    {
        cout << "donnez un entier: ";
        cin >> n;
        som += n;
        i++;
    }
    while (i < 4);

    cout << "Somme: " << som << endl;
}
