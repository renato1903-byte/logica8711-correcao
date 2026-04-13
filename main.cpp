#include<iostream>

int main(){
  
  int idade;

  std::cout<<"Digite a sua idade: "<<std::endl;
  std::cin>>idade;

  if(idade <=0){
    std::cout<<"Idade inválida!"<<std::endl;
  }else if(idade <= 2){
    std::cout<<"Você é um bebê!"<<std::endl;
  }else if(idade <= 8){
    std::cout<<"Você é uma criança!"<<std::endl;
  }else if(idade <= 16){
    std::cout<<"Você é(a) adolescente!"<<std::endl;
  }else if(idade <= 55){
    std::cout<<"Você é adulto!"<<std::endl;
  }else if(idade <= 70){
    std::cout<<"Você é um(a) idoso!"<<std::endl;
  }else{
    std::cout<<"Você é um sênior!"<<std::endl;
  }

  
  

  return 0;

}