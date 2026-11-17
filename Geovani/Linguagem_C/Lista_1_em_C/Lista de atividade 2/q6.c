#include <stdio.h>

int main() {
    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("Nota invalida.");
    } else if (nota >= 9) {
        printf("Excelente!");
    } else if (nota >= 7) {
        printf("Bom!");
    } else if (nota >= 5) {
        printf("Recuperacao.");
    } else {
        printf("Reprovado.");
    }

    return 0;
}