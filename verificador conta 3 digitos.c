#include<stdio.h>
int main(void){
    int conta, inv, d1,d2,d3,r,soma, digito;

    printf("Digite o numero da conta com 3 digitos: ");
    scanf("%d", &conta);

    d1 = conta /100;
    r = conta % 100;
    d2 = r/10;
    d3 = r%10;

    inv = d3 * 100 + d2 *10 + d1;
    soma = conta + inv;

    d1 = soma /100;
    r = soma % 100;
    d2 = r/10;
    d3 = r%10;

    soma = d1*1 + d2*2 + d3*3;
    digito = soma%10;

    printf("A conta %d possui digito verificador %d",conta,digito);

return 0;
}
