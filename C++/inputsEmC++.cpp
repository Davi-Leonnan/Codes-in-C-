// cout << (Operador de interseção)

// cin >> (Operador de extração, fucionando como um input)

#include <iostream>

int main() {

   std::string name;
   int age;

    std::cout << "Qual é a sua idade?: ";
    std::cin >> age;

    std::cout << "Qual é o seu nome?: ";
    // Função para incluir inputs que contém espaços
    // ws: Permite que inputs com espaçamentos não sejam ignorados quando veem logo em seguida de inputs de números.
    std::getline(std::cin >> std::ws, name);

    std::cout << "Olá " << name << '\n';
    std::cout << "Você tem " << age << " Anos";
       
    
    return 0;
}
