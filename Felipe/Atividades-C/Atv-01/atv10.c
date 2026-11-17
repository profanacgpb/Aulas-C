#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    char matricula[20];
    int idade;
    float nota1, nota2, nota3, media;

    printf("Digite o nome do estudante: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a matricula: ");
    scanf("%19s", matricula);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\n===== RELATORIO ACADEMICO =====\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Matricula: %s\n", matricula);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Nota 3: %.2f\n", nota3);
    printf("Media: %.2f\n", media);

    return 0;
}