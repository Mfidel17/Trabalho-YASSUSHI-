#include <stdio.h>

int main() {
    int matriz[10][10];
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int maior = matriz[0][0];
    int linha_maior = 0;
    int coluna_maior = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Localização: (%d, %d)\n", linha_maior + 1, coluna_maior + 1);

    return 0;
}