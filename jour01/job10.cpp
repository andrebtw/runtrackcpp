#include <iostream>

int main(void)
{
    float   prix_kg_carottes =  0;
    int     kg_carottes =       0;
    int     taux_TVA =          0;


    std::cout << "Prix HT kg de carottes: ";
    std::cin >> prix_kg_carottes;
    std::cout << std::endl;

    std::cout << "Nombre kg de carottes: ";
    std::cin >> kg_carottes;
    std::cout << std::endl;

    std::cout << "Taux TVA: ";
    std::cin >> taux_TVA;
    std::cout << std::endl;

    std::cout << (prix_kg_carottes * kg_carottes) * (1 + (taux_TVA * 0.01)) << std::endl;
    return 0;
}
