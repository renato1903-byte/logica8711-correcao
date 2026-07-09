#include <iostream>

using namespace std;

int main() {
    float nota;

        do
        {
            
            std::cout<<"Digite uma nota entre 0 a 10: "<<std::endl;
            std::cin>>nota;
        }
        
        while(nota < 0 || nota > 10);
        std::cout<<"Nota "<<nota<<" registrada."<<std::endl;
   
    return 0;

}














// 