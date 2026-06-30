#include <iostream>

int main(){

    int numeros[5];

    for(int i = 0; i < 5; i++){
        std::cout<<"Digite o "<<i + 1<<" numero: ";
        std::cin>>numeros[i];
    }

    int menor = numeros[0];

    for(int i = 1; i < 5; i++){
        if(numeros[i] < menor){
           menor = numeros[i];
        }
    }

    std::cout<<"Maior numero: "<<menor<<std::endl;

    return 0;
}