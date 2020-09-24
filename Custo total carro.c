#include<stdio.h>
int main(void){

    float custo_cons, pd, custo_fab, imp; // custo_consumidor, parte distribuidora, custo_fabrica, imposto.

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custo_fab);

    //Calculos
    pd = custo_fab * 0.12;
    imp = custo_fab * 0.3;
    custo_cons = custo_fab+pd+imp;

    printf("O preco ao consumidor sera de R$%.3f", custo_cons);

return 0;
}
