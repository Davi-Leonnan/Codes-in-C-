// Funções matemáticas em C++
// Não esqueça de incluir a biblioteca de matemática própria da lingaugem C++ (#include <cmath>)

#include <iostream>
#include <cmath>

int main() {

  double x = 3.5;
  double y = 4;
  double z;

    // Maior número entres dois valores:

    z = std::max(x, y);

    std::cout << z << '\n';

    // Menor número entres dois valores:

     z = std::min(x, y);

    std::cout << z << '\n';

    // Potencializção de um número:

    z = pow(3, 3);

    std::cout << z << '\n';

    // Raiz quafrada de um número:

    z = sqrt(64);

    std::cout << z << '\n';

    // Valor absoluto de um número:

    z = abs(-5);

    std::cout << z << '\n';

    // Valor máximo de um número:

     z = ceil(x);

    std::cout << z << '\n';

    // Valor mínimo de um número:

     z = floor(x);

    std::cout << z << '\n';
 
    
    return 0;
}
