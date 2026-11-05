// Type Conversion: Conversão de valor de um tipo de dado para outro. 

#include <iostream>

int main() {

    // Forma implicita (automática)
    
    double x = (int) 3.14;

    std::cout << x << '\n';

    // Conversão de número para uma letra.

    std::cout << (char) 100 << '\n';

    // Conversão de um número inteiro em porcetagem:

    int acertos = 8;
    int questoes = 10;
    double nota = acertos/(double)questoes * 100 ;

    std::cout << nota << "%" << '\n';
    
    return 0;
}
