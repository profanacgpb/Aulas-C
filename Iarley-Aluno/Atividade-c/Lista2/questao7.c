#include <stdio.h>

int main(){
    float a,b;
    char operacao;

    printf("digite o primeiro numero:");
    scanf("%f", &a);

    printf("digite o segundo numero:");
    scanf("%f", &b);

    printf("escolha a operacao (+, -, *, /) ");
    scanf(" %c", &operacao);

    if (operacao=='+'){
        printf("resultado: %.2f\n", a+b);
    }
    else if (operacao=='-'){
        printf("resultado: %.2f\n", a-b);
    }
    else if(operacao=='*'){
        printf("resultado: %.2f\n", a*b);
    }
   else if (operacao == '/') {
    if (b != 0) {
        printf("resultado: %.2f\n", a / b);
    } else {
        printf("erro: divisao por zero\n");
    }
    } else {
    printf("operacao invalida\n");
    }

    return 0;
}