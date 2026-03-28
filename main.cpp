#include<iostream>
#include<iomanip>

int main(){

    std::string nome;
    int idade;
    float altura;

    std::cout<<"Qual seu nome: "<<std::endl;
    std::cin>>nome;
    std::cout<<"Qual a sua idade "<<std::endl;
    std::cin>>idade;
    std::cout<<"Qual sua altura "<<std::endl; 
    std::cin>>altura;


    std::cout<<"Bem-vindo(a) "<<nome<<"!!"<<std::endl;
    std::cout<<"Idade de "<<idade<<"!!"<<std::endl;
    std::cout<<"Altura de "<<altura<<"!!"<<std::endl;
    


    return 0;
}