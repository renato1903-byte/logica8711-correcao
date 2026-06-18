#include <iostream>

int main(){
    int jogos;

    std::cout<<"===== Calculador de público ====="<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Quantos jogos?";
    std::cin>>jogos;

int somaPublico = 0;

    for(int i = 1; i <= jogos; i++){
        int publico;
        std::cout<<"Públivo jogo "<<i<<": ";
        std::cin>>publico;
        somaPublico += publico;
    }
int media = somaPublico / jogos;

std::cout<<std::endl;
std::cout<<"===== RESULTADO ====="<<std::endl;
std::cout<<"Média de público: "<<media<<" pessoas"<<std::endl;
std::cout<<"Total de público: "<<somaPublico<<" pessoa"<<std::endl;

return 0;
}