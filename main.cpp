#include <iostream>

int main() {

    int numeros[5];
    int pares = 0;

    for (int i = 0; i < 5; i++) {
        std::cout << "Digite o " << i + 1 << " numero: ";
        std::cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++) {
        if (numeros[i] % 2 == 0) {
            pares++;
        }
    }

    std::cout << "\nQuantidade de numeros pares: " << pares << std::endl;

    return 0;
}