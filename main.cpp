#include <iostream>

using namespace std;

int main() {
   int opcao;

   std::cout<<"===== MINI MENU ====="<<std::endl;
   std::cout<<"1 - Iniciar sistema"<<std::endl;
   std::cout<<"2 - Abrir configuracoes"<<std::endl;
   std::cout<<"3 - Sair"<<std::endl;
   std::cin>>opcao;
   
   switch(opcao){
    
    case 1:
    std::cout<<"Iniciando o sistema..."<<std::endl;
        break;

    case 2: 
    std::cout<<"Abrindo configuracoes..."<<std::endl;
        break;

    case 3: 
    std::cout<<"Saindo... Ate logo!"<<std::endl;
        break;

    default:
    std::cout<<"Opcao invalida!"<<std::endl;

   }
   
    return 0;

}














// 