#include <iostream>
#include "velha.h"

void testa_vitoria_X() {
    // Vitória na diagonal principal
    int tabuleiro1[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    std::cout << "Teste vitória X diagonal principal: " << (verifica_jogo_da_velha(tabuleiro1) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória na linha 0
    int tabuleiro2[3][3] = {
        {1, 1, 1},
        {0, 0, 0},
        {0, 0, 0}
    };
    std::cout << "Teste vitória X linha 0: " << (verifica_jogo_da_velha(tabuleiro2) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória na coluna 2
    int tabuleiro3[3][3] = {
        {0, 0, 1},
        {0, 0, 1},
        {0, 0, 1}
    };
    std::cout << "Teste vitória X coluna 2: " << (verifica_jogo_da_velha(tabuleiro3) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória na linha 2
    int tabuleiro4[3][3] = {
        {2, 0, 2},
        {0, 2, 0},
        {1, 1, 1}
    };
    std::cout << "Teste vitória X linha 2: " << (verifica_jogo_da_velha(tabuleiro4) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória na coluna 0
    int tabuleiro5[3][3] = {
        {1, 2, 0},
        {1, 2, 0},
        {1, 0, 0}
    };
    std::cout << "Teste vitória X coluna 0: " << (verifica_jogo_da_velha(tabuleiro5) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória na diagonal secundária
    int tabuleiro6[3][3] = {
        {0, 0, 1},
        {0, 1, 0},
        {1, 0, 2}
    };
    std::cout << "Teste vitória X diagonal secundária: " << (verifica_jogo_da_velha(tabuleiro6) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória com tabuleiro completo
    int tabuleiro7[3][3] = {
        {1, 2, 1},
        {2, 1, 2},
        {2, 1, 1}
    };
    std::cout << "Teste vitória X com tabuleiro cheio: " << (verifica_jogo_da_velha(tabuleiro7) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória com tabuleiro parcialmente preenchido
    int tabuleiro8[3][3] = {
        {0, 2, 1},
        {0, 1, 2},
        {1, 0, 0}
    };
    std::cout << "Teste vitória X parcial: " << (verifica_jogo_da_velha(tabuleiro8) == 1 ? "Passou" : "Falhou") << "\n";
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
        {2, 2, 0},
        {0, 2, 0},
        {0, 0, 2}
    };
    
    std::cout << "Testa_impossivel - caso 1: " << (verifica_jogo_da_velha(tabuleiro1) == -2 ? "Passou" : "Falhou") << "\n";


    int tabuleiro2[3][3] = {
        {2, 2, 2},
        {0, 1, 0},
        {0, 1, 0}
    };

    std::cout << "Testa_impossivel - caso 2: " << (verifica_jogo_da_velha(tabuleiro2) == -2 ? "Passou" : "Falhou") << "\n";


    int tabuleiro3[3][3] = {
        {0, 0, 1},
        {0, 0, 1},
        {2, 0, 1}
    };

    std::cout << "Testa_impossivel - caso 3: " << (verifica_jogo_da_velha(tabuleiro3) == -2 ? "Passou" : "Falhou") << "\n";

    // Caso 1 — Válido (3 X, 3 O)
    int tabuleiro4[3][3] = {
        {1, 2, 1},
        {2, 1, 2},
        {0, 0, 0}
    };
    std::cout << "Caso 1 (válido): " << (verifica_jogo_da_velha(tabuleiro4) != -2 ? "Falhou" : "Passou") << "\n";

    // Caso 2 — Inválido: X e O vencem ao mesmo tempo
    int tabuleiro5[3][3] = {
        {1, 1, 1},
        {2, 2, 2},
        {0, 0, 0}
    };
    std::cout << "Caso 2 (dupla vitória): " << (verifica_jogo_da_velha(tabuleiro5) == -2 ? "Passou" : "Falhou") << "\n";

    // Caso 3 — Válido (5 X, 4 O)
    int tabuleiro6[3][3] = {
        {1, 2, 1},
        {2, 1, 0},
        {2, 1, 1}
    };
    std::cout << "Caso 3 (válido): " << (verifica_jogo_da_velha(tabuleiro6) != -2 ? "Falhou" : "Passou") << "\n";

    // Caso 4 — Inválido (4 X, 5 O)
    int tabuleiro7[3][3] = {
        {2, 2, 1},
        {2, 1, 2},
        {1, 0, 1}
    };
    std::cout << "Caso 4 (O jogou mais que X): " << (verifica_jogo_da_velha(tabuleiro7) == -2 ? "Passou" : "Falhou") << "\n";

    // Caso 5 — Inválido (6 X, 2 O)
    int tabuleiro8[3][3] = {
        {1, 1, 1},
        {1, 0, 0},
        {1, 2, 2}
    };
    std::cout << "Caso 5 (X jogou muito mais): " << (verifica_jogo_da_velha(tabuleiro8) == -2 ? "Passou" : "Falhou") << "\n";
}

void testa_verifica_jogo_indefinido() {
    // Tabuleiro 1: jogo em andamento, sem vencedor
    int tabuleiro1[3][3] = {
        {1, 2, 0},
        {0, 1, 0},
        {2, 0, 0}
    };
    int saida1 = verifica_jogo_da_velha(tabuleiro1);
    std::cout << "Teste jogo indefinido 1: " << (saida1 == -1 ? "Passou" : "Falhou") << "\n";

    // Tabuleiro 2: jogo em andamento, sem vencedor
    int tabuleiro2[3][3] = {
        {1, 2, 1},
        {2, 2, 0},
        {1, 0, 0}
    };
    int saida2 = verifica_jogo_da_velha(tabuleiro2);
    std::cout << "Teste jogo indefinido 2: " << (saida2 == -1 ? "Passou" : "Falhou") << "\n";
    // Tabuleiro 3: jogo em andamento, com poucos movimentos
    int tabuleiro3[3][3] = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };
    int saida3 = verifica_jogo_da_velha(tabuleiro3);
    std::cout << "Teste jogo indefinido 1: " << (saida3 == -1 ? "Passou" : "Falhou") << "\n";
    // Tabuleiro 4: vitória de X (não é indefinido)
    int tabuleiro4[3][3] = {
        {1, 1, 1},
        {2, 2, 0},
        {0, 0, 0}
    };
    std::cout << "Teste jogo não indefinido 4 (vitória X): " << (verifica_jogo_da_velha(tabuleiro4) != -1 ? "Passou" : "Falhou") << "\n";

    // Tabuleiro 5: empate (não é indefinido)
    int tabuleiro5[3][3] = {
        {1, 2, 1},
        {2, 1, 2},
        {2, 1, 2}
    };
    std::cout << "Teste jogo não indefinido 5 (empate): " << (verifica_jogo_da_velha(tabuleiro5) != -1 ? "Passou" : "Falhou") << "\n";
}


int main() {
    testa_vitoria_X();
    return 0;
}
