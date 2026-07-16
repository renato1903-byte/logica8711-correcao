#include <iostream>

using namespace std;

int main() {
    float num, soma = 0, media;

    for(int i = 1; i <= 5; i++){
        std::cout<<"Digite um numero: ";
        std::cin>>num;
        soma += num;
    }
    media = soma / 5;

    std::cout<<"A media e: "<<media<<std::endl;
    return 0;

}