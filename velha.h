#ifndef VELHA_H
#define VELHA_H

// Declarações das funções

int verifica_jogo_da_velha(int tabuleiro[3][3]);

bool verifica_vitoria_X(int tabuleiro[3][3]);
bool verifica_vitoria_O(int tabuleiro[3][3]);

bool jogo_indefinido(int tabuleiro[3][3]);
bool jogo_impossivel(int tabuleiro[3][3]);

#endif 
