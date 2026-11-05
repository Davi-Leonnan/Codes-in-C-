// Condicionais em C++

#include <iostream>

int main() {

    // Condicional para adquirir habilitação para dirigir:
    
    int idade;

    std::cout <<  "Bem-vindo ao site oficial do DETRAN." << '\n';
    std::cout << "Digite a sua idade: " << '\n';
    std::cin >> idade;

    if(idade >= 18 && idade < 100) {
        std::cout << "Parabéns, você está apto para adquirir uma habilitação!";
    }

    else if(idade < 0) {
        std::cout << "Ser humano ainda em formação." << '\n';
    }

     else if(idade >= 100) {
        std::cout << "Idade Inválida. Ancião demais." << '\n';
    }

    else {
        std::cout << "Idade inválida para habilitação." << '\n';
    }
    
    return 0;
}
