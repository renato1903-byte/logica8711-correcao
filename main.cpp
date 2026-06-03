#include <iostream>
#include <string>

struct Aluno{
     std::string nome;
     float nota1;
     float nota2;
};

float calcularMedia(Aluno a){
     return (a.nota1 + a.nota2) / 2;
}


int main(){
 Aluno aluno;

     std::cout<<"Digite o nome do aluno: "<<std::endl;
     std::getline(std::cin, aluno.nome);

     std::cout<<"Digite a nota 1: "<<std::endl;
     std::cin>>aluno.nota1;

     std::cout<<"digite a nota 2: "<<std::endl;
     std::cin>>aluno.nota2;

     float media = calcularMedia(aluno);
     std::cout<<aluno.nome<<" - Media: "<<media<<std::endl;
     return 0;
}