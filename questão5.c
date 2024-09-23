#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char tipo_musica[20];
    char localizacao[50];
    int num_integrantes;
    int ranking;
} Banda;

int main() {
    Banda banda;

    printf("Digite o nome da banda: ");
    fgets(banda.nome, 50, stdin);
    banda.nome[strlen(banda.nome) - 1] = '\0'; // remove o caractere de newline

    printf("Digite o tipo de música: ");
    fgets(banda.tipo_musica, 20, stdin);
    banda.tipo_musica[strlen(banda.tipo_musica) - 1] = '\0'; // remove o caractere de newline

    printf("Digite a localização: ");
    fgets(banda.localizacao, 50, stdin);
    banda.localizacao[strlen(banda.localizacao) - 1] = '\0'; // remove o caractere de newline

    printf("Digite o número de integrantes: ");
    scanf("%d", &banda.num_integrantes);

    printf("Digite a posição no ranking: ");
    scanf("%d", &banda.ranking);

    printf("Banda:\n");
    printf("Nome: %s\n", banda.nome);
    printf("Tipo de música: %s\n", banda.tipo_musica);
    printf("Localização: %s\n", banda.localizacao);
    printf("Número de integrantes: %d\n", banda.num_integrantes);
    printf("Posição no ranking: %d\n", banda.ranking);

    return 0;
}