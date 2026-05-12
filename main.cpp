#include<iostream>

int main(){

    int num1, num2, soma, subt, mult;
    float div;
    int op;

    std::cout<<"Digite aqui o valor para numero 1: "<<std::endl;
    std::cin>>num1;

    std::cout<<"Digite aqui o valor para numero 2: "<<std::endl;
    std::cin>>num2;

        std::cout<<"----- Escolha a oprção -----"<<std::endl;
        std::cout<<"1 - Soma";
        std::cout<<"2 - Subtração";
        std::cout<<"3 - Multiplicaçaõ";
        std::cout<<"4 - divisão";

        switch(op){
            case 1:
            soma = num1 + num2;
            std::cout<<"O resultado da soma é: "<<soma<<std::endl;
            break;
            case 2:
            subt = num1 - num2;
            std::cout<<"o resulta da subtração é: "<<subt<<std::endl;
            break;
            case 3:
            mult = num1 * num2;
            std::cout<<"O resultado da divisão é: "<<std::endl;
            break;
            case 4:
            div = num1 / num2;
            std::cout<<"O resultado da divisão é: "<<std::endl;
            break;
            default:
            std::cout<<"Você não digitou nenhum valor válido!"<<std::endl;


        }

    return 0;
}