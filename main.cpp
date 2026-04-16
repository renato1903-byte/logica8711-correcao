#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){

   std::srand(std::time(0));
   int numero = std::rand() % 100 + 1;
   int chute;

  std::cout<<"Advinhe (1 a 100): ";

  do {
    std::cin>>chute;

    if(chute > numero)std::cout<<"Menor!\n";
    else if(chute < numero)std::cout<<"Maior!\n";

  } while(chute != numero);

  std::cout<<"Acertou!";





   return 0;

}