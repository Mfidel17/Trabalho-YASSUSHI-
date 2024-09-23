#include <stdio.h>

int main() {
    char tabuleiro[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    char jogador = 'X';

    while (1) {
        printf("Tabuleiro:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%c ", tabuleiro[i][j]);
            }
            printf("\n");
        }

        int linha, coluna;
        printf("Digite o número da linha (1 a 3): ");
        scanf("%d", &linha);
        printf("Digite o número da coluna (1 a 3): ");
        scanf("%d", &coluna);

        if (linha < 1 || linha > 3 || coluna < 1 || coluna > 3) {
            printf("Posição inválida!\n");
            continue;
        }

        linha--;
        coluna--;

        if (tabuleiro[linha][coluna] != 'X' && tabuleiro[linha][coluna] != 'O') {
            tabuleiro[linha][coluna] = jogador;
            jogador = (jogador == 'X') ? 'O' : 'X';
        } else {
            printf("Posição ocupada!\n");
        }
    }

    return 0;
}