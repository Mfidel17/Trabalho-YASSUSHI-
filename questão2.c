#include <stdio.h>

int main() {
    int N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int vetor[N];
    printf("Digite os elementos do vetor: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int ordenado = 1;
    for (int i = 0; i < N - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            ordenado = 0;
            break;
        }
    }

    if (ordenado) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}