#include "velha.h"
#include <string>

// Função principal
int verifica_jogo_da_velha(int tabuleiro[3][3]) {
    if (verifica_vitoria_X(tabuleiro)) {
        return 1;
    } else if (verifica_vitoria_O(tabuleiro)) {
        return 2;
    } else if (jogo_impossivel(tabuleiro)) {
        return -2;
    } else if (jogo_indefinido(tabuleiro)) {
        return -1;
    } else return 0; // caso de empate
}


bool verifica_vitoria_X(int tabuleiro[3][3]) {
    char x = 'X';
    if (tabuleiro[0][0] == x && tabuleiro[1][1] == x && tabuleiro[2][2] == x) {
        return true;
    }   else if (tabuleiro[0][2] == x && tabuleiro[1][1] == x && tabuleiro[2][0] == x) {
        return true;
    } else for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == x && tabuleiro[i][1] == x && tabuleiro[i][2] == x) {
            return true;
        }
        else if (tabuleiro[0][i] == x && tabuleiro[1][i] == x && tabuleiro[2][i] == x) {
            return true;
        }
    }
    return false;
}

bool verifica_vitoria_O(int tabuleiro[3][3]) {
    return false;
}

bool jogo_indefinido(int tabuleiro[3][3]) {
    return false;
}

bool jogo_impossivel(int tabuleiro[3][3]) {
    return false;
}