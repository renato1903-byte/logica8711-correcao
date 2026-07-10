#include <iostream>

using namespace std;

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    std::cout<<"Numeros do array:"<<std::endl;

    for(int i = 0; i < 5; i++){
        std::cout<<numeros[i]<<std::endl;
    }
   
    return 0;

}