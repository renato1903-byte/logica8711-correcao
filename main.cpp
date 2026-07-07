#include <iostream>
#include <vector>

int main() {
    
    std::vector<int>numeros;

    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);

    int soma = 0;

    std::cout<<"Vector = ";
    for(int n : numeros){
        std::cout<<n<<" ";
        soma += n;
}
    
    std::cout<<"\nSoma = "<<soma<<std::endl;
    return 0;

}