#include <stdio.h>

int main() {
    int anoNascimento;
    int idade;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    idade = 2026 - anoNascimento;

    printf("Sua idade aproximada e: %d anos\n", idade);

    return 0;
}