#include "velha.h"
#include <string>

// Função principal

/**
 * @brief Verifica o que está acontecendo no jogo
 *
 * Esta função recebe o tabuleiro do jogo da velha e chama as demais funções verificadoras
 * para analisar o que está acontecendo na partida em questão
 *
 * @param tabuleiro Matriz 3x3 representando o estado do jogo.
 * @return t-2 se o jogo é inválido, 1 se X ganhou, 2 se O ganhou, -1 se está aberto, 0 em caso de empate. 
 */
int verifica_jogo_da_velha(int tabuleiro[3][3]) {
    if (jogo_impossivel(tabuleiro)) {
        return -2;
    // as próximas funções partem do princípio de que é um jogo possível
    } else if (verifica_vitoria_X(tabuleiro)) {
        return 1;
    } else if (verifica_vitoria_O(tabuleiro)) {
        return 2;
    }   else if (jogo_indefinido(tabuleiro)) {
        return -1;
    } else return 0; // caso de empate
}

/**
 * @brief Verifica se o jogador de X ganhou.
 *
 * Esta função recebe o tabuleiro do jogo da velha e determina se o jogador que joga com a letra
 * X ganhou a partida, considerando que é uma partida válida.
 *
 * @param tabuleiro Matriz 3x3 representando o estado do jogo.
 * @return true se o jogador de X ganhou, false caso contrário.
 */
bool verifica_vitoria_X(int tabuleiro[3][3]) {
    if (tabuleiro[0][0] == 1 && tabuleiro[1][1] == 1 && tabuleiro[2][2] == 1) {
        return true;
    }   else if (tabuleiro[0][2] == 1 && tabuleiro[1][1] == 1 && tabuleiro[2][0] == 1) {
        return true;
    } else for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == 1 && tabuleiro[i][1] == 1 && tabuleiro[i][2] == 1) {
            return true;
        }
        else if (tabuleiro[0][i] == 1 && tabuleiro[1][i] == 1 && tabuleiro[2][i] == 1) {
            return true;
        }
    }
    return false;
}

/**
 * @brief Verifica se o jogador de O ganhou.
 *
 * Esta função recebe o tabuleiro do jogo da velha e determina se o jogador que joga com a letra
 * O ganhou a partida, considerando que é uma partida válida.
 *
 * @param tabuleiro Matriz 3x3 representando o estado do jogo.
 * @return true se o jogador de O ganhou, false caso contrário.
 */

bool verifica_vitoria_O(int tabuleiro[3][3]) {
    if (tabuleiro[0][0] == 2 && tabuleiro[1][1] == 2 && tabuleiro[2][2] == 2) {
        return true;
    }   else if (tabuleiro[0][2] == 2 && tabuleiro[1][1] == 2 && tabuleiro[2][0] == 2) {
        return true;
    } else for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == 2 && tabuleiro[i][1] == 2 && tabuleiro[i][2] == 2) {
            return true;
        }
        else if (tabuleiro[0][i] == 2 && tabuleiro[1][i] == 2 && tabuleiro[2][i] == 2) {
            return true;
        }
    }
    return false;
}

/**
 * @brief Verifica se o jogo está indefinido.
 *
 * Esta função recebe o tabuleiro do jogo da velha e determina se o jogo ainda está em aberto,
 * ou seja, se ainda há possibilidade de um vencedor.
 *
 * @param tabuleiro Matriz 3x3 representando o estado do jogo.
 * @return true se o jogo está indefinido (aberto), false caso contrário.
 */

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

/**
 * @brief Verifica se a partida em questão é válida.
 *
 * Esta função recebe o tabuleiro do jogo da velha e determina se a partida em questão
 * é válida, considerando as regras do jogo da velha
 *
 * @param tabuleiro Matriz 3x3 representando o estado do jogo.
 * @return true se é uma partida válida, false caso contrário.
 */
 
 bool jogo_impossivel(int tabuleiro[3][3]) {
    int contador_x = 0, contador_o = 0;
    if (verifica_vitoria_O(tabuleiro) && verifica_vitoria_X(tabuleiro)) {
        return true;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == 1) {
                contador_x += 1;
            } else if (tabuleiro[i][j] == 2) {
                contador_o += 1;
            }
        }
    }
    if (contador_o > contador_x + 1 || contador_x > contador_o + 1) {
        return true;
    }
    return false;
}
