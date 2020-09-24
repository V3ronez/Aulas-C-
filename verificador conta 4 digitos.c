#include<stdio.h>
int main(void){
    int conta, inv, d1,d2,d3,d4, r, soma, digito;

    printf("Digite o numero da conta:");
    scanf("%d", &conta);

    d1 = conta /1000;
    r  = conta %1000;
    d2 = r /100;
    r  = r %100;
    d3 = r /10;
    d4 = r %10;

   inv = d4*1000, d3*100, d2*10, d1*1;
  soma = conta+ inv;

    d1 = soma /1000;
    r  = soma %1000;
    d2 = r /100;
    r  = r %100;
    d3 = r /10;
    d4 = r %10;

  soma = d1*1 + d2*2 + d3*3;
digito = soma%10;

    printf("A conta possui digito verificador igual a: %d",digito);
return 0;
}
