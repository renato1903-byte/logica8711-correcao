#include <iostream>

using namespace std;


int main() {
    const float PI = 3.14;
    float raio, area;

    std::cout<<"Digite o raio do circulo: ";
    std::cin>>raio;

    area = PI * (raio * raio);

    std::cout<<"Area do circulo: "<<area<<std::endl;
    return 0;

}