#include <iostream>

int main(){

    int fila[10];
    int inicio = 0;
    int fim = 0;
    int opcao;

    std::cout<<"===== FILA COM MENU ====="<<std::endl;

    while(true){

        std::cout<<"\n1. Enfileirar"<<std::endl;
        std::cout<<"2. Desenfileirar"<<std::endl;
        std::cout<<"3. Exibir fila"<<std::endl;
        std::cout<<"4. Sair"<<std::endl;
        std::cout<<"Escolha: ";
        std::cin>>opcao;

        if(opcao == 1){

            if(fim == 10){
                std::cout<<"Fila cheia!"<<std::endl;
            }else{
                int valor;
                std::cout<<"Digite um valor: ";
                std::cin>>valor;

                fila[fim] = valor;
                fim++;

                std::cout<<"Valor enfileirado!"<<std::endl;
            }

        }else if(opcao == 2){

            if(inicio == fim){
                std::cout<<"Fila vazia!"<<std::endl;
            }else{
                std::cout<<"Removido: "<<fila[inicio]<<std::endl;
                inicio++;
            }

        }else if(opcao == 3){

            if(inicio == fim){
                std::cout<<"Fila vazia!"<<std::endl;
            }else{
                std::cout<<"Fila: ";
                for(int i = inicio; i < fim; i++){
                    std::cout<<fila[i]<<" ";
                }
                std::cout<<std::endl;
            }

        }else if(opcao == 4){

            std::cout<<"Encerrando..."<<std::endl;
            break;

        }else{

            std::cout<<"Opcao invalida!"<<std::endl;

        }
    }

    return 0;
}




































