#include<iostream>

float somar(float a, float b){
    return a + b;
}

float subtrair(float a, float b){
    return a - b;
}

float multiplicar(float a, float b){
    return a * b;
}

float dividir(float a, float b){
    return a / b;
}

void coletarNumeros(float &a, float &b){
    std::cout<<"Digite um valor para a: "<<std::endl;
    std::cin>>a;

    std::cout<<"Digite um valor para b: "<<std::endl;
    std::cin>>b;
}

void exibirResultado(float &a, float&b){
    coletarNumeros(a, b);

    int op;
    std::cout<<"Digite uma opcao: "<<std::endl;
    std::cout<<"1 - Somar"<<std::endl;
    std::cout<<"2 - Subtrair"<<std::endl;
    std::cout<<"3 - Multiplicar"<<std::endl;
    std::cout<<"4 - Dividir"<<std::endl;
    std::cin>>op;
}

