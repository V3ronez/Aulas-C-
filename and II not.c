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
&& - and - na express�o booleana s� � verdadeiro se as compara�oes forem verdadeiro;
|| - or  - na express�o booleana so � falsa se todas as compara��es foram falsas;
!  - not - se for verdade vira falso e vice-versa;
*/
