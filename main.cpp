#include <iostream>

using namespace std;

int main() {
    int num, maior;

    for(int i = 1; i <= 5; i++){
        std::cout<<"Digite um numero: ";
        std::cin>>num;

        if(i == 1 || num > maior){
            maior = num;
        }
    }
    std::cout<<"O maior numero e: "<<maior<<std::endl;
    return 0;

}