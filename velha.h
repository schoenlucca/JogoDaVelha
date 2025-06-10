#ifndef VELHA_H
#define VELHA_H

// Declarações das funções

/**
 * @brief Verifica o que está acontecendo no jogo da velha.
 * 
 * @param tabuleiro Matriz 3x3 do jogo.
 * @return int Código indicando o resultado da partida:
 *             -2: jogo impossível
 *              1: X venceu
 *              2: O venceu
 *             -1: jogo indefinido (aberto)
 *              0: empate
 */
int verifica_jogo_da_velha(int tabuleiro[3][3]);

/**
 * @brief Verifica se o jogador X venceu.
 * 
 * @param tabuleiro Matriz 3x3 do jogo.
 * @return true se X venceu, false caso contrário.
 */
bool verifica_vitoria_X(int tabuleiro[3][3]);

/**
 * @brief Verifica se o jogador O venceu.
 * 
 * @param tabuleiro Matriz 3x3 do jogo.
 * @return true se O venceu, false caso contrário.
 */
bool verifica_vitoria_O(int tabuleiro[3][3]);

/**
 * @brief Verifica se o jogo ainda está aberto (indefinido).
 * 
 * @param tabuleiro Matriz 3x3 do jogo.
 * @return true se ainda houver posições vazias, false caso contrário.
 */
bool jogo_indefinido(int tabuleiro[3][3]);

/**
 * @brief Verifica se o jogo é impossível.
 * 
 * @param tabuleiro Matriz 3x3 do jogo.
 * @return true se o jogo violar regras básicas (número inválido de jogadas, múltiplos vencedores), false caso contrário.
 */

bool jogo_impossivel(int tabuleiro[3][3]);

#endif 
