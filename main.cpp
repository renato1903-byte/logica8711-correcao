#include <iostream>

using namespace std;

int main() {
    int numero;
    bool primo = true;

    std::cout<<"Digite um numero: ";
    std::cin>>numero;

    if(numero <= 1){
        primo = false;
    }else{
        for(int i = 2; i < numero; i++){
            if(numero % i == 0){
                primo = false;
                break;
            }
        }
    }
    if(primo){
        std::cout<<"e um numero primo."<<std::endl; 
    }else{
        std::cout<<"nao e um numero primo."<<std::endl;
    }
    return 0;

}