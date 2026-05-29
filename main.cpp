#include<iostream>

int contarDigitos(int n){
    if(n == 0) return 0;

    return 1 + contarDigitos(n / 10);
}   
       
int main(){
    
        int numeroUsuario, numero;
        

        std::cout<<"Digite um número inteiro: "<<std::endl;
        std::cin>>numeroUsuario;

        if(numeroUsuario == 0){
            std::cout<<"O número 0 tem 1 dígito.\n"<<std::endl;
        }else{
            std::cout<<"O número "<<numeroUsuario<<" tem "<<contarDigitos(numeroUsuario)<<"digitos.\n";
        }

        std::cout<<"O número "<<numero<<" tem "<<contarDigitos(numero)<<"digitos.\n";

    return 0;
}
 


















  
        
        


    
        
