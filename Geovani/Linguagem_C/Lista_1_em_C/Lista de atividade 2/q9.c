#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Idade invalida.");

    } else if (idade <= 12) {
        printf("Crianca.");

    } else if (idade <= 17) {
        printf("Adolescente.");

    } else if (idade <= 59) {
        printf("Adulto.");

    } else {
        printf("Idoso.");
    }

    return 0;
}