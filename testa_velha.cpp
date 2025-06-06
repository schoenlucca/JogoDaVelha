#include <iostream>
#include "velha.h"

void testa_vitoria_X() {
    // Vitória na diagonal principal
    int tabuleiro1[3][3] = {
        {1, 0, 0},
        {2, 1, 0},
        {2, 2, 1}
    };
    std::cout << "Vitória X diagonal principal: " << (verifica_jogo_da_velha(tabuleiro1) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória na linha 0
    int tabuleiro2[3][3] = {
        {1, 1, 1},
        {2, 2, 0},
        {0, 0, 0}
    };
    std::cout << "Vitória X linha 0: " << (verifica_jogo_da_velha(tabuleiro2) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória na coluna 2
    int tabuleiro3[3][3] = {
        {0, 2, 1},
        {2, 0, 1},
        {0, 0, 1}
    };
    std::cout << "Vitória X coluna 2: " << (verifica_jogo_da_velha(tabuleiro3) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória na linha 2
    int tabuleiro4[3][3] = {
        {2, 2, 0},
        {0, 0, 0},
        {1, 1, 1}
    };
    std::cout << "Vitória X linha 2: " << (verifica_jogo_da_velha(tabuleiro4) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória na coluna 0
    int tabuleiro5[3][3] = {
        {1, 2, 0},
        {1, 2, 0},
        {1, 0, 0}
    };
    std::cout << "Vitória X coluna 0: " << (verifica_jogo_da_velha(tabuleiro5) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória na diagonal secundária
    int tabuleiro6[3][3] = {
        {0, 0, 1},
        {0, 1, 2},
        {1, 0, 2}
    };
    std::cout << "Vitória X diagonal secundária: " << (verifica_jogo_da_velha(tabuleiro6) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória com tabuleiro completo
    int tabuleiro7[3][3] = {
        {1, 2, 1},
        {2, 1, 2},
        {2, 1, 1}
    };
    std::cout << "Vitória X com tabuleiro cheio: " << (verifica_jogo_da_velha(tabuleiro7) == 1 ? "Passou" : "Falhou") << "\n";

    // Vitória com contagem correta de X e O (5 X e 4 O)
    int tabuleiro8[3][3] = {
        {1, 2, 0},
        {1, 2, 0},
        {1, 0, 2}
    };
    std::cout << "Vitória X coluna 0 (jogo válido): " << (verifica_jogo_da_velha(tabuleiro8) == 1 ? "Passou" : "Falhou") << "\n";
}



void testa_vitoria_O() {
    // Caso 1: Vitória de O na diagonal principal
    int tabuleiro1[3][3] = {
        {2, 0, 0},
        {1, 2, 1},
        {0, 1, 2}
    };

    // Caso 2: Vitória de O na linha 0 (com Xs no resto)
    int tabuleiro2[3][3] = {
        {2, 2, 2},
        {1, 1, 0},
        {0, 0, 0}
    };

    // Caso 3: Vitória de O na coluna 2 (com tabuleiro parcialmente preenchido)
    int tabuleiro3[3][3] = {
        {1, 0, 2},
        {1, 0, 2},
        {0, 0, 2}
    };

    std::cout << "Vitória O diagonal principal: " << (verifica_vitoria_O(tabuleiro1) ? "Passou" : "Falhou") << "\n";
    std::cout << "Vitória O linha 0: " << (verifica_vitoria_O(tabuleiro2) ? "Passou" : "Falhou") << "\n";
    std::cout << "Vitória O coluna 2: " << (verifica_vitoria_O(tabuleiro3) ? "Passou" : "Falhou") << "\n";

        // Caso 4: Vitória de O na linha 1
    int tabuleiro4[3][3] = {
        {1, 0, 0},
        {2, 2, 2},
        {1, 0, 0}
    };

    // Caso 5: Vitória de O na coluna 0
    int tabuleiro5[3][3] = {
        {2, 1, 1},
        {2, 0, 0},
        {2, 1, 0}
    };

    // Caso 6: Vitória de O na diagonal secundária
    int tabuleiro6[3][3] = {
        {1, 0, 2},
        {0, 2, 0},
        {2, 1, 1}
    };

    std::cout << "Vitória O linha 1: " << (verifica_vitoria_O(tabuleiro4) ? "Passou" : "Falhou") << "\n";
    std::cout << "Vitória O coluna 0: " << (verifica_vitoria_O(tabuleiro5) ? "Passou" : "Falhou") << "\n";
    std::cout << "Vitória O diagonal secundária: " << (verifica_vitoria_O(tabuleiro6) ? "Passou" : "Falhou") << "\n";


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

void testa_empate() {
    // Caso 1: tabuleiro cheio, sem vencedor
    int tabuleiro1[3][3] = {
        {1, 2, 1},
        {2, 1, 2},
        {2, 1, 2}
    };

    // Caso 2: tabuleiro cheio, sem vencedor
    int tabuleiro2[3][3] = {
        {2, 1, 2},
        {1, 1, 2},
        {1, 2, 1}
    };

    // Caso 3: tabuleiro cheio, sem vencedor
    int tabuleiro3[3][3] = {
        {2, 1, 2},
        {2, 1, 1},
        {1, 2, 2}
    };

    std::cout << "Empate 1: " << (verifica_jogo_da_velha(tabuleiro1) == 0 ? "Passou" : "Falhou") << "\n";
    std::cout << "Empate 2: " << (verifica_jogo_da_velha(tabuleiro2) == 0 ? "Passou" : "Falhou") << "\n";
    std::cout << "Empate 3: " << (verifica_jogo_da_velha(tabuleiro3) == 0 ? "Passou" : "Falhou") << "\n";

        // Caso 4: tabuleiro cheio, jogadas bem distribuídas
    int tabuleiro4[3][3] = {
        {1, 2, 1},
        {1, 2, 2},
        {2, 1, 1}
    };

    // Caso 5: padrão de preenchimento alternado, sem vitória
    int tabuleiro5[3][3] = {
        {2, 1, 2},
        {1, 2, 1},
        {1, 2, 1}
    };

    // Caso 6: nenhuma linha, coluna ou diagonal com 3 iguais
    int tabuleiro6[3][3] = {
        {1, 1, 2},
        {2, 2, 1},
        {1, 2, 1}
    };

    std::cout << "Empate 4: " << (verifica_jogo_da_velha(tabuleiro4) == 0 ? "Passou" : "Falhou") << "\n";
    std::cout << "Empate 5: " << (verifica_jogo_da_velha(tabuleiro5) == 0 ? "Passou" : "Falhou") << "\n";
    std::cout << "Empate 6: " << (verifica_jogo_da_velha(tabuleiro6) == 0 ? "Passou" : "Falhou") << "\n";
}

void testa_todos_os_casos() {
    int resultado;

    std::cout << "======= Testando casos válidos: vitória de X =======\n";

    // Diagonal principal (3 X, 2 O)
    int caso1[3][3] = {
        {1, 2, 0},
        {0, 1, 2},
        {0, 0, 1}
    };
    resultado = verifica_jogo_da_velha(caso1);
    std::cout << "Vitória X (diagonal): " << (resultado == 1 ? "Passou" : "Falhou") << "\n";

    // Linha 1 (3 X, 2 O)
    int caso2[3][3] = {
        {2, 0, 0},
        {1, 1, 1},
        {2, 0, 0}
    };
    resultado = verifica_jogo_da_velha(caso2);
    std::cout << "Vitória X (linha): " << (resultado == 1 ? "Passou" : "Falhou") << "\n";

    // Coluna 0 (3 X, 2 O)
    int caso3[3][3] = {
        {1, 2, 0},
        {1, 2, 0},
        {1, 0, 0}
    };
    resultado = verifica_jogo_da_velha(caso3);
    std::cout << "Vitória X (coluna): " << (resultado == 1 ? "Passou" : "Falhou") << "\n";


    std::cout << "\n======= Testando casos válidos: vitória de O =======\n";

    // Linha 0 (3 O, 2 X)
    int caso4[3][3] = {
        {2, 2, 2},
        {1, 1, 0},
        {0, 0, 0}
    };
    resultado = verifica_jogo_da_velha(caso4);
    std::cout << "Vitória O (linha): " << (resultado == 2 ? "Passou" : "Falhou") << "\n";

    // Coluna 2 (3 O, 2 X)
    int caso5[3][3] = {
        {0, 1, 2},
        {1, 0, 2},
        {0, 0, 2}
    };
    resultado = verifica_jogo_da_velha(caso5);
    std::cout << "Vitória O (coluna): " << (resultado == 2 ? "Passou" : "Falhou") << "\n";

    // Diagonal secundária (3 O, 2 X)
    int caso6[3][3] = {
        {0, 0, 2},
        {0, 2, 0},
        {2, 1, 1}
    };
    resultado = verifica_jogo_da_velha(caso6);
    std::cout << "Vitória O (diagonal secundária): " << (resultado == 2 ? "Passou" : "Falhou") << "\n";


    std::cout << "\n======= Testando empate (sem vencedor, jogo completo) =======\n";

    int caso7[3][3] = {
        {1, 2, 1},
        {2, 1, 2},
        {2, 1, 2}
    };
    resultado = verifica_jogo_da_velha(caso7);
    std::cout << "Empate 1: " << (resultado == 0 ? "Passou" : "Falhou") << "\n";

    int caso8[3][3] = {
        {2, 1, 2},
        {1, 2, 1},
        {1, 2, 1}
    };
    resultado = verifica_jogo_da_velha(caso8);
    std::cout << "Empate 2: " << (resultado == 0 ? "Passou" : "Falhou") << "\n";


    std::cout << "\n======= Testando jogo indefinido (em andamento) =======\n";

    int caso9[3][3] = {
        {1, 0, 0},
        {2, 1, 0},
        {0, 2, 0}
    };
    resultado = verifica_jogo_da_velha(caso9);
    std::cout << "Indefinido 1: " << (resultado == -1 ? "Passou" : "Falhou") << "\n";

    int caso10[3][3] = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0}
    };
    resultado = verifica_jogo_da_velha(caso10);
    std::cout << "Indefinido 2: " << (resultado == -1 ? "Passou" : "Falhou") << "\n";


    std::cout << "\n======= Testando jogo impossível =======\n";

    // X jogou 5, O jogou 1 (muito X)
    int caso11[3][3] = {
        {1, 1, 1},
        {1, 0, 0},
        {1, 2, 0}
    };
    resultado = verifica_jogo_da_velha(caso11);
    std::cout << "Impossível (X jogou demais): " << (resultado == -2 ? "Passou" : "Falhou") << "\n";

    // O venceu, mas jogou menos (impossível)
    int caso12[3][3] = {
        {2, 2, 2},
        {1, 1, 0},
        {0, 0, 0}
    };
    resultado = verifica_jogo_da_velha(caso12);
    std::cout << "Impossível (O venceu fora de ordem): " << (resultado == 2 ? "Passou" : "Falhou") << "\n";

    // Ambos venceram (impossível)
    int caso13[3][3] = {
        {1, 1, 1},
        {2, 2, 2},
        {0, 0, 0}
    };
    resultado = verifica_jogo_da_velha(caso13);
    std::cout << "Impossível (dupla vitória): " << (resultado == -2 ? "Passou" : "Falhou") << "\n";

    std::cout << "\n======= Todos os testes concluídos =======\n";
}

int main() {
    testa_todos_os_casos();
    return 0;
}
