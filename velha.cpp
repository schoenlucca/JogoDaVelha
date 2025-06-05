#include "velha.h"
#include <string>

// Função principal
std::string verifica_jogo_da_velha(int tabuleiro[3][3]) {
    if (verifica_vitoria_X(tabuleiro)) {
        return "Vitória de X!";
    } else if (verifica_vitoria_O(tabuleiro)) {
        return "Vitória de O!";
    } else if (jogo_impossivel(tabuleiro)) {
        return "Jogo impossível!";
    } else if (jogo_indefinido(tabuleiro)) {
        return "Jogo indefinido";
    } else if (verifica_empate(tabuleiro)) {
        return "Jogo empatado";
    }
}


bool verifica_vitoria_X(int tabuleiro[3][3]) {
    
}

bool verifica_vitoria_O(int tabuleiro[3][3]) {

}

bool verifica_empate(int tabuleiro[3][3]) {

}

bool jogo_indefinido(int tabuleiro[3][3]) {

}

bool jogo_impossivel(int tabuleiro[3][3]) {

}