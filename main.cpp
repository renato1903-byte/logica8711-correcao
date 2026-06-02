#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

int main() {
    vector<string> mapa = {
        "####################",
        "#........#.........#",
        "#.######.#.######..#",
        "#................. #",
        "#.######.#.######..#",
        "#........#.........#",
        "####################"
    };

    int x = 1;
    int y = 1;
    int pontos = 0;

    while (true) {
        system("cls");

        for (int i = 0; i < mapa.size(); i++) {
            for (int j = 0; j < mapa[i].size(); j++) {
                if (i == y && j == x)
                    cout << 'C';
                else
                    cout << mapa[i][j];
            }
            cout << endl;
        }

        cout << "\nPontos: " << pontos << endl;
        cout << "W A S D para mover | Q para sair\n";

        char tecla = tolower(_getch());

        int novoX = x;
        int novoY = y;

        if (tecla == 'w') novoY--;
        else if (tecla == 's') novoY++;
        else if (tecla == 'a') novoX--;
        else if (tecla == 'd') novoX++;
        else if (tecla == 'q') break;

        if (mapa[novoY][novoX] != '#') {
            x = novoX;
            y = novoY;

            if (mapa[y][x] == '.') {
                pontos++;
                mapa[y][x] = ' ';
            }
        }

        bool venceu = true;
        for (auto linha : mapa) {
            for (char c : linha) {
                if (c == '.') {
                    venceu = false;
                    break;
                }
            }
        }

        if (venceu) {
            system("cls");
            cout << "PARABENS! VOCE COLETOU TODOS OS PONTOS!\n";
            cout << "Pontuacao final: " << pontos << endl;
            break;
        }
    }

    return 0;
}