// Operador Ternário: Utilizando do simbolo de interrogação (?), tem como função de escrfever condicionais de forma mais simplificada.

// condição ? expressão01 ; expressão02;

#include <iostream>

int main() {

   //int numero = 4;
    
    //numero % 2 == 1 ? std::cout <<  "impar" : std::cout << "par";

    bool motor = true;

    //motor ? std::cout << "Motor ligado" : std::cout << "Motor desligado";
    //ou
    std::cout << (motor ? "motor ligado" : "motor desligado");

    


    return 0;
}
