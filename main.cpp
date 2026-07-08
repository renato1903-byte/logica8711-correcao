#include <iostream>
#include <vector>

int main() {
    
    std::vector<int>numeros;

    std::cout<<"Inverter o vector: "<<std::endl;

    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(15);
    numeros.push_back(20);
    
    std::cout<<"Original: ";
    for(int i  = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Invertido: ";
    for(int i = numeros.size() -1; i >= 0; i--){
        std::cout<<numeros[i]<<" ";

    }
    std::cout<<std::endl;
    return 0;

}