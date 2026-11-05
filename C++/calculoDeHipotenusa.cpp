// Calculando a hipotenusa de um triângulo reto

#include <iostream>
#include <cmath>

int main() {

  double a;
  double b;
  double c;

    std::cout << "Digite o valor de A: ";
    std::cin >> a;

    std::cout << "Digite o valor de B: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "Lado C: " << c;
 
    
    return 0;
}
