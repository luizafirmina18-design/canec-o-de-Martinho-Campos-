#include <psl1ght/lv2.h>
#include <tiny3d.h>
#include <stdio.h>

// CANECÃO - Teu jogo
int main() {
    tiny3d_Init(1024*1024);
    // Cor de fundo azul céu
    // Aqui é onde o Canecão vai correr, pular e atirar
    // Versão 1: ele aparece no meio da tela e se move com o analógico
    
    while(1) {
        tiny3d_Clear(0xFF87CEEB, TINY3D_CLEAR_ALL);
        // Desenha o chão verde
        // Desenha o Canecão - quadrado branco com olho
        tiny3d_Flip();
    }
    return 0;
}