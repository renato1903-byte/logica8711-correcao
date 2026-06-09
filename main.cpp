#include <iostream>
#include <string>

struct Tarefa{
    int id;
    std::string descricao;
    bool concluida;
};

Tarefa tarefas[50];
int totalTarefas = 0;

void adicionar(){
    std::cout<<"\n --- Adicionar tarefas ---"<<std::endl;

    std::cout<<"ID: ";
    std::cin>>tarefas[totalTarefas].id;

    std::cin.ignore();
    std::cout<<"Descrição: ";
    std::getline(std::cin, tarefas[totalTarefas].descricao);

    tarefas[totalTarefas].concluida = false;

    totalTarefas++;
    std::cout<<"Tarefa adicionada!"<<std::endl;
}

void listar(){
    if(totalTarefas == 0){
        std::cout<<"\nNenhuma tarefa!"<<std::endl;
        return;

    
    }
    std::cout<<"\n--- Tarefas ---"<<std::endl;
    for(int i = 0; i < totalTarefas; i++){
        std::string status = tarefas[i].concluida ? "S" : "N";
        std::cout<<"["<<status<<"]"<<tarefas[i].id<<" - "<<tarefas[i].descricao<<std::endl;
    }
    
}
    void marcarConcluida(){
    int idBuscado;

    std::cout << "\nID da tarefa: ";
    std::cin >> idBuscado;

    for(int i = 0; i < totalTarefas; i++){
        if(tarefas[i].id == idBuscado){
            tarefas[i].concluida = true;
            std::cout << "Tarefa marcada como concluida!" << std::endl;
            return;
        }
    }

    std::cout << "Tarefa nao encontrada!" << std::endl;
}

int main(){
    int opcao;

    do{
        std::cout << "\n=== MENU ===" << std::endl;
        std::cout << "1 - Adicionar tarefa" << std::endl;
        std::cout << "2 - Listar tarefas" << std::endl;
        std::cout << "3 - Marcar tarefa concluida" << std::endl;
        std::cout << "0 - Sair" << std::endl;
        std::cout << "Opcao: ";
        std::cin >> opcao;

        switch(opcao){
            case 1:
                adicionar();
                break;
            case 2:
                listar();
                break;
            case 3:
                marcarConcluida();
                break;
            case 0:
                std::cout << "Programa encerrado." << std::endl;
                break;
            default:
                std::cout << "Opcao invalida!" << std::endl;
        }

    }while(opcao != 0);

    return 0;
}
        
    
