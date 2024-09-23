#include <stdio.h>

int main() {
  int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int i, temp;

  for (i = 0; i < 10; i++) {
    temp = vetor[i];
    vetor[i] = vetor[9 - i];
    vetor[9 - i] = temp;
  }

  for (i = 0; i < 10; i++) {
    printf("%d ", vetor[i]);
  }

  printf("\n");
  return 0;
}