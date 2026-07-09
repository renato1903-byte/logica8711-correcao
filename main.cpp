#include <iostream>
#include <string>

using namespace std;

int main() {
   int idade;

   std::cout<<"Digite sua idade: "<<std::endl;
   std::cin>>idade;

   if(idade < 18){
    std::cout<<"Você é maior de idade."<<std::endl;
   }else if(idade >= 18 && idade < 60){
    std::cout<<"Voce e maior de idade."<<std::endl;
   }else{
    std::cout<<"Voce e da terceira idade."<<std::endl;
   }
   

   
    return 0;

}














// 