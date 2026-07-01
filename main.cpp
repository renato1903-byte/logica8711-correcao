#include <iostream>

int main() {

    int numeros[10];
    int contador = 0;

    for(int i = 0; i < 10; i++){
        std::cout << "Digite o " << i + 1 << " numero: ";
        std::cin >> numeros[i];
    }

    for(int i = 0; i < 10; i++){
        if(numeros[i] == 5){
            contador++;
        }
    }

    std::cout << "\nO numero 5 aparece " << contador << " vez(es)." << std::endl;

    return 0;
}