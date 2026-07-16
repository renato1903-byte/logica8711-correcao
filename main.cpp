#include <iostream>

using namespace std;

int main() {
    int contador = 0;

    for(int i = 1; i <= 100; i++){
       if( i % 2 == 0){
        contador++;
       }
    }
    std::cout<<"Existem: "<<contador<<std::endl;

    return 0;

}