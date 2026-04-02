#include<iostream>



int main(){

  std::string nome;
  int idade;
  int anoAtual = 2026;
  



  std::cout<<"Qual seu nome: "<<std::endl;
  std::cin>>nome;

  std::cout<<"Qual sua idade: "<<std::endl;
  std::cin>>idade;

  std::cout<<"Qual anoAtual: "<<std::endl;
  std::cin>>anoAtual;

  std::cout<<"Bem-vindo: "<<nome<<std::endl;

  std::cout<<"Você nasceu em: "<<(anoAtual-idade)<<std::endl;




   

    return 0;
}