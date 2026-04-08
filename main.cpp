#include<iostream>
#include<string>

int main(){

  float n1, n2, n3, media;

  std::cout<<"Digite 3 notas: ";
  std::cin>>n1>>n2>>n3;

  media = (n1 + n2 + n3 ) / 3;
  std::cout<<"Media: "<<media<<std::endl;

  if (media >= 7) {
    std::cout<<"Aprovado"<<std::endl;
    }  else  {
      std::cout<<"Reprovado"<<std::endl;
      
    }


  return 0;

}