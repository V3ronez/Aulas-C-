#include<stdio.h>
int main(void){
    int num;
    printf("Digite um numero de tres digitos: ");
    scanf("%i", &num);
    if(num >=100 && num <=999){
            printf("Numero Valido!",num);
    }
    else{
        printf("Numero Invalido!",num);
    }
 return 0;
}
/*
&& - and - na expressão booleana só é verdadeiro se as comparaçoes forem verdadeiro;
|| - or  - na expressão booleana so é falsa se todas as comparações foram falsas;
!  - not - se for verdade vira falso e vice-versa;
*/
