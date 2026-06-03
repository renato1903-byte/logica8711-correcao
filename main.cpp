#include <iostream>
#include <string>

struct Aluno{
     std::string nome;
     float nota;
  
};




int main(){
 Aluno alunos[3]={
     {"Renato", 8.5},
     {"Henrique", 9.0},
     {"Juliana", 6.5}
 };

 for(int i = 0; i < 3; i++){
     std::cout<<alunos[i].nome<<": "<<alunos[i].nota<<std::endl;
 }

     
     return 0;
}