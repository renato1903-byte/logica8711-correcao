#include<iostream>
#include<string>
#include<iomanip>

int main(){


std::string nome;
int idade;
float altura;


std::cout<<"Qual seu nome: "<<std::endl;
std::cin>>nome;
std::cout<<"Qual sua idade: "<<std::endl;
std::cin>>idade;
std::cout<<"Qual sua altura: "<<std::endl;
std::cin>>altura;


if(idade <= 10){
  std::cout<<"Você se enquadra no infantil: "<<std::endl;
}else if(idade <= 18){
  std::cout<<"Você se enquadra no adolescente: "<<std::endl;
}else if(idade <= 60){
  std::cout<<"Você se enquadra no adulto: "<<std::endl;
}












 

  
  

  return 0;

}