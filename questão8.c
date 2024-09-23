#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    printf("Antes da troca:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    troca(&x, &y);

    printf("Depois da troca:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}