#include<iostream>
#include<format>

int main(){
    std::string nome = "Renato";

    std::string mensagem = std::format("Olá, {}! Você tem {} anos.\n", nome);
    std::cout<<mensagem;

    return 0;
        
}