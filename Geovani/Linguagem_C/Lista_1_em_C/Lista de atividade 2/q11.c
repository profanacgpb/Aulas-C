#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    if (nota1 < 0 || nota1 > 10 ||
        nota2 < 0 || nota2 > 10 ||
        nota3 < 0 || nota3 > 10) {

        printf("Notas invalidas.");

    } else {
        media = (nota1 + nota2 + nota3) / 3;

        printf("Media: %.2f\n", media);

        if (media >= 7) {
            printf("Aprovado.");

        } else if (media >= 5) {
            printf("Recuperacao.");

        } else {
            printf("Reprovado.");
        }
    }

    return 0;
}