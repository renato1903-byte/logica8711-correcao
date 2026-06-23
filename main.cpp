#include <iostream>

int main(){

    int numeros[] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho;

    std::cout<<"===== PARES E ÍMPARES ====="<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Pares: ";
    for(int i = 0; i < tamanho; i++){
        if(numeros[i] % 2 == 0){
            std::cout<<" ";
        }
    }
    std::cout<<std::endl;
    std::cout<<"Ímpares: ";
    for(int i = 0; i < tamanho; i++){
        if(numeros[i] % 2 != 0){
            std::cout<<numeros[i]<<" ";
        }
    } 
    return 0;
}
















