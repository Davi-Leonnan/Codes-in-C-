#include <iostream>

int main () {

    //integer variables

    int x; //declaração
    x = 5;

    int y = 6;

    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    //double variables

    double price = 14.95;

    double temperature = 45.6;

    std::cout << price << '\n';
    std::cout << temperature << '\n';

    // single character variables

    char habilitacao_categoria = 'B';

    char genero = 'M';

    std::cout << habilitacao_categoria << '\n';
    std::cout << genero << '\n';

    // boolean variables

    bool portao_aberto = true;

    bool farois_ligado = false;

    bool esta_chovendo = true;

    std::cout << portao_aberto << '\n';
    std::cout << farois_ligado << '\n';
    std::cout << esta_chovendo << '\n';

    // string variables

    std::string nome = "Robert";
    std::string ingrediente = "Farinha de trigo";
    std::string soverte_sabor = "chocolate Belga";

    std::cout << nome << '\n';
    std::cout << ingrediente << '\n';
    std::cout << soverte_sabor << '\n';
    std::cout << "Olá " << nome << "!" << " Seja bem-vindo a nossa plataforma!" << '\n';

    return 0;
}