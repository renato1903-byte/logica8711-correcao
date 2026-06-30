#include <iostream>

int main(){
    
    int numeros[5];

    for(int i = 0; i < 5; i++){
        std::cout<<"Digite o "<<i + 1<<"número: "<<std::endl;
        std::cin>>numeros[i];
    }

    std::cout<<"\nNúmeros informados"<<std::endl;

    for(int i = 0; i < 5; i++){
        std::cout<<numeros[i]<<std::endl;
    }
    
    return 0;
}