#include <iostream>
#include <string>
#include <cctype>
bool ehPalindromo(std::string s){
     int inicio = 0;
     int fim = s.length() - 1;

     while(inicio < fim){
          if(s[inicio] != s[fim]){
               return false;
          }
          inicio++;
          fim--;
     }
     return true;
}


int main(){

     std::string palavra;
     std::cout<<"Digite uma palavra: "<<std::endl;
     std::cin>>palavra;

     if(ehPalindromo(palavra)){
          std::cout<<"Eh um palindromo!"<<std::endl;
     }else{
          std::cout<<"Não eh um palindromo!"<<std::endl;
     }

     return 0;
}