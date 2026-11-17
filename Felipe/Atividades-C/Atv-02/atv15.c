#include <stdio.h>

int main() {
    int usuario, senha;

    printf("Digite o codigo do usuario: ");
    scanf("%d", &usuario);

    printf("Digite a senha: ");
    scanf("%d", &senha);

    if (usuario == 2026 && senha == 1234) {
        printf("Login realizado com sucesso!\n");
    } else if (usuario != 2026) {
        printf("Usuario incorreto!\n");
    } else {
        printf("Senha incorreta!\n");
    }

    return 0;
}