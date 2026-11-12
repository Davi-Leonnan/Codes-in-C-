// Switch: Maneira alternativa de polpar esforços ao escrever múltiplas condicionais "if else";

#include <iostream>

int main() {

    char operador;
    double num1;
    double num2;
    double resultado;

    std::cout << "======= Calculadora =======\n";

    std::cout << "Digite o perador (+, -, *, /): ";
    std::cin >> operador;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

     std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    switch(operador) {
        case '+':
        resultado = num1 + num2;
        std::cout << "resultado: " << resultado << '\n';
        break;
        case '-':
        resultado = num1 - num2;
        std::cout << "resultado: " << resultado << '\n';
        break;
        case '*':
        resultado = num1 * num2;
        std::cout << "resultado: " << resultado << '\n';
        break;
        case '/':
        resultado = num1 / num2;
        std::cout << "resultado: " << resultado << '\n';
        break;
        default:
        std::cout << "Resposta não válida.\n";
        break;
    }

     std::cout << "============================";


    return 0;
}
