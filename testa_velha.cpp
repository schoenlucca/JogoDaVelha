#include <iostream>
#include "velha.h"

void testa_vitoria_X() {
    // Vitória na diagonal principal
    int tabuleiro1[3][3] = {
        {'X', 0, 0},
        {0, 'X', 0},
        {0, 0, 'X'}
    };

    std::cout << "Teste vitória X diagonal: " << (verifica_jogo_da_velha(tabuleiro1) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória na linha 0
    int tabuleiro2[3][3] = {
        {'X', 'X', 'X'},
        {0, 0, 0},
        {0, 0, 0}
    };

    std::cout << "Teste vitória X diagonal: " << (verifica_jogo_da_velha(tabuleiro2) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória na coluna 2
    int tabuleiro3[3][3] = {
        {0, 0, 'X'},
        {0, 0, 'X'},
        {0, 0, 'X'}
    };
   
    std::cout << "Teste vitória X diagonal: " << (verifica_jogo_da_velha(tabuleiro3) == 1 ? "Passou" : "Falhou") << "\n";

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
    
    std::cout << "Testa_impossivel - caso 1: " << (verifica_jogo_da_velha(tabuleiro1) == -2 ? "Passou" : "Falhou") << "\n";


    int tabuleiro2[3][3] = {
        {'O', 'O', 'O'},
        {0, 'X', 0},
        {0, 'X', 0}
    };

    std::cout << "Testa_impossivel - caso 2: " << (verifica_jogo_da_velha(tabuleiro2) == -2 ? "Passou" : "Falhou") << "\n";


    int tabuleiro3[3][3] = {
        {0, 0, 'X'},
        {0, 0, 'X'},
        {'O', 0, 'X'}
    };

    std::cout << "Testa_impossivel - caso 3: " << (verifica_jogo_da_velha(tabuleiro3) == -2 ? "Passou" : "Falhou") << "\n";
}

void testa_jogo_indefinido() {
    // Tabuleiro 1: jogo em andamento, espaços vazios, sem vencedor
    int tabuleiro1[3][3] = {
        {'X', 'O', 0},
        {0, 'X', 0},
        {'O', 0, 0}
    };

    // Tabuleiro 2: jogo em andamento, espaços vazios, sem vencedor
    int tabuleiro2[3][3] = {
        {'X', 'O', 'X'},
        {'O', 'O', 0},
        {'X', 0, 0}
    };

    // Tabuleiro 3: jogo em andamento, espaços vazios, sem vencedor
    int tabuleiro3[3][3] = {
        {0, 0, 0},
        {0, 'X', 0},
        {0, 0, 0}
    };

    std::cout << "Teste jogo indefinido 1: " << (jogo_indefinido(tabuleiro1) ? "Passou" : "Falhou") << "\n";
    std::cout << "Teste jogo indefinido 2: " << (jogo_indefinido(tabuleiro2) ? "Passou" : "Falhou") << "\n";
    std::cout << "Teste jogo indefinido 3: " << (jogo_indefinido(tabuleiro3) ? "Passou" : "Falhou") << "\n";
}

void testa_jogo_indefinido_linhas() {
    // Tabuleiro 1: nenhuma linha completa, espaço vazio, jogo aberto
    int tabuleiro1[3][3] = {
        {'X', 'O', 0},  // linha 0 aberta
        {'O', 'X', 0},  // linha 1 aberta
        {'O', 0, 'X'}   // linha 2 aberta
    };

    // Tabuleiro 2: linha 0 aberta, mas linhas não completadas
    int tabuleiro2[3][3] = {
        {'X', 'O', 'O'},
        {'O', 0, 'X'},
        {0, 'X', 0}
    };

    // Tabuleiro 3: jogo aberto, linhas todas incompletas, espaços vazios
    int tabuleiro3[3][3] = {
        {0, 'O', 'X'},
        {'X', 0, 'O'},
        {'O', 'X', 0}
    };

    std::cout << "Teste linhas aberto 1: " << (jogo_indefinido(tabuleiro1) ? "Passou" : "Falhou") << "\n";
    std::cout << "Teste linhas aberto 2: " << (jogo_indefinido(tabuleiro2) ? "Passou" : "Falhou") << "\n";
    std::cout << "Teste linhas aberto 3: " << (jogo_indefinido(tabuleiro3) ? "Passou" : "Falhou") << "\n";
}



int main() {
    testa_impossivel();
    return 0;
}
