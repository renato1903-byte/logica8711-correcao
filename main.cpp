#include <iostream>

using namespace std;

int triplo(int numero){
    return numero * 3;
}

int main() {
    int numero;
     std::cout<<"Digite um numero: ";
     std::cin>>numero;

     std::cout<<"O triplo de "<<numero<<" e: "<<triplo(numero)<<std::endl;
    return 0;

}