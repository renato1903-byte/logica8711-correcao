#include <iostream>

int main() {
    int numero;

    std::cout<<"Digite um numero para ver a tabuada: ";
    std::cin>>numero;

    std::cout<<"\nTabuada do "<<numero<<":\n";

    for(int i = 1; i <= 10; i++){
        std::cout<<numero<<" x "<<i<<" = "<<numero * i<<"\n";
    }
    return 0;

}