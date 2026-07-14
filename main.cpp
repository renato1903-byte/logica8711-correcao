#include <iostream>

using namespace std;

int cubo(int numero){
    return numero * numero * numero;
}

int main() {
    int numero;

    std::cout<<"Digite um numero: ";
    std::cin>>numero;
    
    std::cout<<"O cubo de: "<<numero<<" e: "<<cubo(numero)<<std::endl;

    return 0;

}