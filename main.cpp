#include <iostream>

using namespace std;

int main() {
    float num, contador = 0;

    for(int i = 1; i <= 10; i++){
        std::cout<<"Digite um numero: ";
        std::cin>>num;
        
        if(num > 50){
            contador++;
        }
    }
    

    std::cout<<"Quantidade de numero maior que 50: "<<contador<<std::endl;
    return 0;

}