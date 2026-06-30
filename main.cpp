#include <iostream>

int main() {

    int numeros[10];

    for(int i = 0; i < 10; i++){
        std::cout << "Digite o " << i + 1 << " numero: ";
        std::cin >> numeros[i];
    }

    std::cout << "\nNumeros impares:" << std::endl;

    for(int i = 0; i < 10; i++){
        if(numeros[i] % 2 != 0){
            std::cout << numeros[i] << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}