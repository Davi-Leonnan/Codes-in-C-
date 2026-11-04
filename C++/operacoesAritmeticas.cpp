// Operações aritméticas (+, -, *, /) em C++


#include <iostream>
#include <vector>

int main()
{
    int bolotas = 1000;
    
    // Adição ↓
    
    //bolotas = bolotas + 20;
    //ou
    //bolotas+=20;
    //ou
    //bolotas++;
    
    // Subtração ↓
    
    //bolotas = bolotas - 500;
    //ou
    //bolotas-=200;
    //ou
    //bolotas--;
    
    // Multiplicação ↓
    
    //bolotas = bolotas * 2;
    //ou
    //bolotas *= 3;
    
    // Divisões ↓
    
    //bolotas = bolotas / 2;
    //ou
    //bolotas /= 5;
    
    // Divisões impares ou pares (módulo)↓
    
    //int pocoes = bolotas % 3;
    
    //std::cout << pocoes;
    
    // Operação com múltiplos operadores ↓
    
    int nozes = 2 * 1000 / 6 + 100 - 250;
    
    std::cout << nozes;
    
    
    return 0;
}