#include "velha.h"
#include <string>

// Função principal
int verifica_jogo_da_velha(int tabuleiro[3][3]) {
    if (jogo_impossivel(tabuleiro)) {
        return -2;
    // as próximas funções partem do princípio de que é um jogo possível
    } else if (jogo_indefinido(tabuleiro)) {
        return -1;
    } else if (verifica_vitoria_X(tabuleiro)) {
        return 1;
    } else if (verifica_vitoria_O(tabuleiro)) {
        return 2;
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
        char o = 'O';
    if (tabuleiro[0][0] == o && tabuleiro[1][1] == o && tabuleiro[2][2] == o) {
        return true;
    }   else if (tabuleiro[0][2] == o && tabuleiro[1][1] == o && tabuleiro[2][0] == o) {
        return true;
    } else for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == o && tabuleiro[i][1] == o && tabuleiro[i][2] == o) {
            return true;
        }
        else if (tabuleiro[0][i] == o && tabuleiro[1][i] == o && tabuleiro[2][i] == o) {
            return true;
        }
    }
    return false;
}

//já considera que o jogo não tem ganhadores e é possível
bool jogo_indefinido(int tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == 0) {  // espaço vazio encontrado
                return true;  // jogo aberto
            }
        }
    }
    return false;
}


bool jogo_impossivel(int tabuleiro[3][3]) {
    int contador_x, contador_o = 0;
    char x = 'X';
    char o = 'O';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == x) {
                contador_x += 1;
            } else if (tabuleiro[i][j] == o) {
                contador_o += 1;
            }
        }
    }
    if (contador_o > contador_x + 1 || contador_x > contador_o + 1) {
        return true;
    }
    return false;
}