#include<iostream>

 void mostrar(int sudoku[9][9]){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                std::cout<<sudoku[i][j]<<" ";
            }
            std::cout<<std::endl;
        }
    }

bool linhaValida(int sudoku[9][9], int linha, int numero){
    for(int i = 0; i < 9; i++){
        if(sudoku[linha][i] == numero)
        return false;
    }
    return true;
}

bool colunaValida(int sudoku [9][9], int coluna, int numero){
    for(int i = 0; i < 9; i++){
        if(sudoku[i][coluna] == numero)
        return false;
    }
    return true;
}

bool blocoValido(int sudoku[9][9], int linha, int coluna, int numero){
        int inicioLinha = linha - linha % 3;
        int inicioColuna = coluna - coluna % 3;

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; i++){
                if(sudoku[inicioLinha + i][inicioColuna + j] == numero)
                return false;
            }
        }
        return true;
}

bool podeColocar(int sudoku[9][9], int linha, int coluna, int numero) {
    return linhaValida(sudoku, linha, numero) &&
           colunaValida(sudoku, coluna, numero) &&
           blocoValido(sudoku, linha, coluna, numero);
}

int main(){
    int sudoku[9][9] = {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };



while(true) {
        mostrar(sudoku);

        int linha, coluna, numero;

        std::cout << "\nLinha (0-8): ";
        std::cin >> linha;

        std::cout << "Coluna (0-8): ";
        std::cin >> coluna;

        std::cout << "Numero (1-9): ";
        std::cin >> numero;

        if(linha < 0 || linha > 8 ||
           coluna < 0 || coluna > 8 ||
           numero < 1 || numero > 9) {
            std::cout << "Entrada invalida!\n";
            continue;
        }

        if(sudoku[linha][coluna] != 0) {
            std::cout << "Posicao ja preenchida!\n";
            continue;
        }

        if(podeColocar(sudoku, linha, coluna, numero)) {
            sudoku[linha][coluna] = numero;
        } else {
            std::cout << "Movimento invalido!\n";
        }
    }
    
    return 0;
}
 


















  
        
        


    
        
