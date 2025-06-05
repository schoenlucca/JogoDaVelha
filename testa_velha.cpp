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

int main() {
    testa_vitoria_X();
    return 0;
}
