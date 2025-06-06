#include <iostream>
#include "velha.h"

void testa_vitoria_X() {
    // Vitória na diagonal principal
    int tabuleiro1[3][3] = {
        {'X', 0, 0},
        {0, 'X', 0},
        {0, 0, 'X'}
    };

    // Vitória na linha 0
    int tabuleiro2[3][3] = {
        {'X', 'X', 'X'},
        {0, 0, 0},
        {0, 0, 0}
    };

    // Vitória na coluna 2
    int tabuleiro3[3][3] = {
        {0, 0, 'X'},
        {0, 0, 'X'},
        {0, 0, 'X'}
    };

    std::cout << "Teste vitória X diagonal: " << (verifica_vitoria_X(tabuleiro1) ? "Passou" : "Falhou") << "\n";
    std::cout << "Teste vitória X linha: " << (verifica_vitoria_X(tabuleiro2) ? "Passou" : "Falhou") << "\n";
    std::cout << "Teste vitória X coluna: " << (verifica_vitoria_X(tabuleiro3) ? "Passou" : "Falhou") << "\n";
}

void testa_vitoria_O() {
    // Vitória na diagonal principal
    int tabuleiro1[3][3] = {
        {'O', 0, 0},
        {0, 'O', 0},
        {0, 0, 'O'}
    };

    // Vitória na linha 0
    int tabuleiro2[3][3] = {
        {'O', 'O', 'O'},
        {0, 0, 0},
        {0, 0, 0}
    };

    // Vitória na coluna 2
    int tabuleiro3[3][3] = {
        {0, 0, 'O'},
        {0, 0, 'O'},
        {0, 0, 'O'}
    };

    std::cout << "Teste vitória O diagonal: " << (verifica_vitoria_O(tabuleiro1) ? "Passou" : "Falhou") << "\n";
    std::cout << "Teste vitória O linha: " << (verifica_vitoria_O(tabuleiro2) ? "Passou" : "Falhou") << "\n";
    std::cout << "Teste vitória O coluna: " << (verifica_vitoria_O(tabuleiro3) ? "Passou" : "Falhou") << "\n";
}

void testa_impossivel() {
    
    int tabuleiro1[3][3] = {
        {'O', 'O', 0},
        {0, 'O', 0},
        {0, 0, 'O'}
    };

    int tabuleiro2[3][3] = {
        {'O', 'O', 'O'},
        {0, 'X', 0},
        {0, 'X', 0}
    };

    int tabuleiro3[3][3] = {
        {0, 0, 'X'},
        {0, 0, 'X'},
        {'O', 0, 'X'}
    };

    std::cout << "Teste impossibilidade por incoerência de caracteres: " << (jogo_impossivel(tabuleiro1) ? "Passou" : "Falhou") << "\n";
    std::cout << "Teste de caso válido: " << (jogo_impossivel(tabuleiro2) ? "Passou" : "Falhou") << "\n";
    std::cout << "Teste de outro caso impossível por incoerência de caracteres: " << (jogo_impossivel(tabuleiro3) ? "Passou" : "Falhou") << "\n";
}

int main() {
    testa_vitoria_X();
    testa_vitoria_O();
    testa_impossivel();
    return 0;
}
