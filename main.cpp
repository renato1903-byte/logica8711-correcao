#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){
    int jogador, pc;

    std::srand(std::time(0));
    pc = std::rand() % 3 + 1;

    std::cout<<"1-Pedra 2-Papel 3-Tesoura: ";
    std::cin>>jogador;

    std::cout<<"PC escolheu: "<<pc<<std::endl;

    if(jogador == pc){
      std::cout<<"Empate!";
    }else if(
        (jogador == 1 && pc == 2) ||
        (jogador == 2 && pc == 1) ||
        (jogador == 3 && pc == 2)

    ) {
          std::cout<<"Você venceu!";
    }else{
          std::cout<<"Você perdeu!";
    }


   return 0;

}