// Switch: Maneira alternativa de polpar esforços ao escrever múltiplas condicionais "if else";

#include <iostream>

int main() {

    char nota;

    std::cout << "Qual o valor da sua nota?: ";
    std::cin >> nota;
    
switch(nota) {
    case 'A':
        std::cout << "Excelente";
        break;
    case 'B':
        std::cout << "Bom";
        break;
    case 'C':
        std::cout << "Regular";
        break;
    case 'D':
        std::cout << "Regular";
        break;
    case 'E':
        std::cout << "Regular";
        break;
    case 'F':
        std::cout << "Insuficiente";
        break;
    default:
    std::cout << "Digite apenas letras entre 'A' e 'F' ";
}


    return 0;
}
