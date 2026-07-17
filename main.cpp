#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vetor[8];

    // Leitura dos números
    for (int i = 0; i < 8; i++) {
        std::cout<<"Digite o "<< i + 1 <<"º numero: ";
        std::cin>>vetor[i];
    }

    // Ordem original
    cout << "\nOrdem original: ";
    for (int i = 0; i < 8; i++) {
        std::cout<<vetor[i]<<" ";
    }

    // Ordem invertida
    std::cout<<"\nOrdem invertida: ";
    for (int i = 7; i >= 0; i--) {
        std::cout<<vetor[i]<<" ";
    }

    return 0;
}
    