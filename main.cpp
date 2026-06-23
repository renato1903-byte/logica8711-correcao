#include <iostream>

int main(){

    int pilha[10];
    int topo = -1;
    int opcao;
    int valor;

    std::cout<<"===== PILHA COM MENU ====="<<std::endl;

    while(true){

        std::cout<<"\n1. Empilhar"<<std::endl;
        std::cout<<"2. Desempilhar"<<std::endl;
        std::cout<<"3. Exibir pilha"<<std::endl;
        std::cout<<"4. Sair"<<std::endl;
        std::cout<<"Escolha: ";
        std::cin>>opcao;

        if(opcao == 1){

            if(topo == 9){
                std::cout<<"Pilha cheia!"<<std::endl;
            }else{
                std::cout<<"Digite um valor: ";
                std::cin>>valor;

                topo++;
                pilha[topo] = valor;

                std::cout<<"Valor empilhado!"<<std::endl;
            }

        }else if(opcao == 2){

            if(topo == -1){
                std::cout<<"Pilha vazia!"<<std::endl;
            }else{
                std::cout<<"Valor removido: "<<pilha[topo]<<std::endl;
                topo--;
            }

        }else if(opcao == 3){

            if(topo == -1){
                std::cout<<"Pilha vazia!"<<std::endl;
            }else{
                std::cout<<"Elementos da pilha:"<<std::endl;

                for(int i = topo; i >= 0; i--){
                    std::cout<<pilha[i]<<std::endl;
                }
            }

        }else if(opcao == 4){

            std::cout<<"Encerrando programa..."<<std::endl;
            break;

        }else{

            std::cout<<"Opcao invalida!"<<std::endl;

        }
    }

    return 0;
}