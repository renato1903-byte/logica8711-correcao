#include <iostream>

int main(){

    int numeros[5];
    int soma;
    float media;

    for(int i = 0; i < 5; i++){
        std::cout<<"Digite o "<<i + 1<<"numero: "<<std::endl;
        std::cin>>numeros[i];
        soma += numeros[i];
    }

    media = soma / 5.0;

    std::cout<<"\nMédia do valores: "<<media<<std::endl;

    return 0;
}