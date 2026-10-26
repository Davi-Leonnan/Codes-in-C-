// Constantes em C++


#include <iostream>

int main()
{
    const double PI = 3.1415;
    double raio = 10;
    double circumferencia = 2 * PI * raio;
    
    const int VELOCIDADE_DA_LUZ = 299792558;
    const int COMPRIMENTO = 2000;
    const int ALTURA = 1500;
    
    std::cout << circumferencia << "cm" << '\n';
    std::cout << VELOCIDADE_DA_LUZ << "KM/H" << '\n';
    std::cout << COMPRIMENTO << "KM/H" << '\n';

    return 0;
}