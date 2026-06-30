#include <iostream>

int main() {

    int numeros[10];

    for(int i = 0; i < 10; i++){
        std::cout << "Digite o " << i + 1 << " numero: ";
        std::cin >> numeros[i];
    }

    std::cout << "\nO array possui " << 10 << " elementos." << std::endl;

    return 0;
}