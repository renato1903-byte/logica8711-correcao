#include<iostream>
#include<string>
#include<cmath>

int main(){

  std::string user;
  std::string senha;

  std::cout<<"Digite seu usario de acesso: "<<std::endl;
  std::cin>>user;

  std::cout<<"Digite sua senha: "<<std::endl;
  std::cin>>senha;

  if(senha == "123456789"){
    std::cout<<"O usuario "<<user<<" esta logado com sucesso!!"<<std::endl;

  }else{
    std::cout<<"Usuario ou senha invalido!"<<std::endl;

  }


  
  

  return 0;

}