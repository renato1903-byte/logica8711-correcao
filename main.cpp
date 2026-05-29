#include<iostream>

void tabuada(int numero, int multiplicador){
    if(multiplicador == 0){
        return;
    }
        tabuada(numero, multiplicador - 1);

        std::cout<<numero<<" x "<<multiplicador<<" = "<<(numero * multiplicador)<<std::endl;
}

int main(){
        int numero;

        std::cout<<"Digite um número: "<<std::endl;
        std::cin>>numero;

        tabuada(numero, 10);

    return 0;
}
 


















  
        
        


    
        
