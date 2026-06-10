#include <iostream>

int main(){
    int idade = 38;

    std::string resultado = (idade >= 18) ? "Maior idade!" : "Menor de idade!";

    std::cout<<resultado<<std::endl;
}