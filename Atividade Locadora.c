#include<stdio.h>
int main(void){

    int horas,resto, mult3;
    float valor;

    printf("Digite a quantidade de horas do aluguel: ");
    scanf("%d", &horas);

    //calculos
    mult3 = horas/3;
    //printf("\n%d",mult3);
    resto = horas%3;
    //printf("\n%d\n",resto);
    valor = mult3*8.5 + resto*3.5;

    printf("O valor a pagar sera de R$%.2f", valor);

return 0;
}
