#include <iostream>
#include <string>

struct Produto{
    int id;
    std::string nome;
    float preco;
};

Produto produtos[50];
int totalProdutos = 0;

void menu(){
    int opcao;

    do{
        std::cout << "\n=== MENU ===" << std::endl;
        std::cout << "1 - Adicionar produto" << std::endl;
        std::cout << "2 - Buscar produto" << std::endl;
        std::cout << "3 - Exibir produtos" << std::endl;
        std::cout << "0 - Sair" << std::endl;
        std::cout << "Opcao: ";
        std::cin >> opcao;

        switch(opcao){
            case 1:
                std::cout << "\nID: ";
                std::cin >> produtos[totalProdutos].id;

                std::cin.ignore();

                std::cout << "Nome: ";
                std::getline(std::cin, produtos[totalProdutos].nome);

                std::cout << "Preco: ";
                std::cin >> produtos[totalProdutos].preco;

                totalProdutos++;

                std::cout << "Produto adicionado!" << std::endl;
                break;

            case 2:{
                int idBuscado;
                bool encontrado = false;

                std::cout << "\nDigite o ID: ";
                std::cin >> idBuscado;

                for(int i = 0; i < totalProdutos; i++){
                    if(produtos[i].id == idBuscado){
                        std::cout << "\nID: " << produtos[i].id << std::endl;
                        std::cout << "Nome: " << produtos[i].nome << std::endl;
                        std::cout << "Preco: R$ " << produtos[i].preco << std::endl;
                        encontrado = true;
                        break;
                    }
                }

                if(!encontrado){
                    std::cout << "Produto nao encontrado!" << std::endl;
                }
                break;
            }

            case 3:
                if(totalProdutos == 0){
                    std::cout << "Nenhum produto cadastrado!" << std::endl;
                }else{
                    std::cout << "\n=== PRODUTOS ===" << std::endl;

                    for(int i = 0; i < totalProdutos; i++){
                        std::cout << "ID: " << produtos[i].id
                                  << " | Nome: " << produtos[i].nome
                                  << " | Preco: R$ " << produtos[i].preco
                                  << std::endl;
                    }
                }
                break;

            case 0:
                std::cout << "Programa encerrado!" << std::endl;
                break;

            default:
                std::cout << "Opcao invalida!" << std::endl;
        }

    }while(opcao != 0);
}

int main(){
    menu();
    return 0;
}
