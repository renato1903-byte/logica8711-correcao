#include <iostream>

int main(){
    
   int numeros[5];
   int soma = 0;

   for(int i = 0; i < 5; i++){
    std::cout<<"Digite o"<<i + 1<<"numero: "<<std::endl;
    std::cin>>numeros[i];
    soma += numeros[i];
   }
   std::cout<<"\n Soma total: "<<soma<<std::endl;
    
    return 0;
}