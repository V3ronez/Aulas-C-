#include<stdio.h>

int main(void) {
    float valor, volume, consumo, distancia, total;

    printf("Digite o valor do combustivel em R$:");
    scanf("%f", &valor);

    printf("Digite a distancia percorrida em KM/H:");
    scanf("%f", &distancia);

    printf("Digite o consumo do veiculo em KM/L:");
    scanf("%f", &consumo);

    volume = distancia / consumo;
    total = valor * volume;

    printf("\nO volume gasto sera de %.2f l/km, e o total gasto sera R$%.2f.", volume, total);

    return 0;
}
