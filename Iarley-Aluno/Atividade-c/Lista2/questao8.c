#include <stdio.h>

int main(){
    float valor, desconto,valorfinal;
    float porcentagem;

    printf("Digite o valor da compra:");
    scanf("%f",&valor);

    if (valor>=500){
        porcentagem=15;
    }
    else if(valor>=300){
        porcentagem=10;
    }
    else if(valor>=100){
        porcentagem=5;
    }
    else{
        porcentagem=0;
    }
    
    desconto=valor*porcentagem /100;
    valorfinal=valor-desconto;

    printf("o desconto é:R$%2.f\n", desconto);
    printf("valor finsl: R$%2.f\n", valorfinal);

    return 0;
}