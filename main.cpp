#include <iostream>
#include <vector>

int main() {
    
    std::vector<int>numeros;                
    
    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(15);
    numeros.push_back(20);
    numeros.push_back(25);
    numeros.push_back(30);
    // Apresenta todos os números
    std::cout<<"Vector: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<" ";
    }
   // Mostra apenas os pares
   std::cout<<"\nPares: ";
   for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] % 2 == 0){
            std::cout<<numeros[i]<<" ";
        }
   }
   // Mostra todos os pares
   std::cout<<"\nImpares: ";
   for(int i = 0; i < numeros.size(); i++){
    if(numeros[i] % 2 != 0 ){
        std::cout<<numeros[i]<<" ";
    }
   }
    return 0;

}