#include <iostream>
#include <string>

struct Pessoa{
     std::string nome;
     int idade;
     float altura;
};


int main(){

          Pessoa p1;

          p1.nome = "Renato";
          p1.idade = 18;
          p1.altura = 1.83;

          std::cout<<"Nome: "<<p1.nome<<std::endl;
          std::cout<<"idade: "<<p1.idade<<std::endl;
          std::cout<<"Altura: "<<p1.altura<<std::endl;
   
     return 0;
}