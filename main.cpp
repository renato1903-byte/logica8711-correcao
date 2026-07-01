#include <iostream>

int main() {

    int numeros[5];

    for(int i = 0; i < 5; i++){
        std::cout << "Digite o " << i + 1 << " numero: ";
        std::cin >> numeros[i];
    }

    std::cout << "\nNumeros em ordem inversa:" << std::endl;

    for(int i = 4; i >= 0; i--){
        std::cout << numeros[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}