#include <iostream>
#include <vector>

int main() {
    
    std::vector<int>numeros;
    std::cout<<"Buscar elementos: "<<std::endl;
    numeros.push_back(100);
    numeros.push_back(200);
    numeros.push_back(300);
    numeros.push_back(400);
   

   

    
    std::cout<<"Vector = ";
    for(int i = 0; i < numeros.size(); i++ ){
        std::cout<<numeros[i]<<" ";
    }
    int buscado = 0;
    int posicao = 1;
    for(int i = 0; i <numeros.size(); i++ ){
        if(numeros[i] == buscado){
            posicao = i;
            break;
        }   
}
    
   if(posicao != -1){
    std::cout<<"Número "<<buscado<<" encontrado na posicao "<<posicao<<std::endl;
   }else{
    std::cout<<"Número não encontrado!"<<std::endl;
   }
    return 0;

}