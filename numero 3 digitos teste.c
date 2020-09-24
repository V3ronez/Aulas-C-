#include<stdio.h>
int main(void){
    int num;
    printf("Digite um numero de tres digitos: ");
    scanf("%i", &num);
    if(num < 1000){
        if(num >=100){
            printf("Numero Valido!");
    }
    else{
        printf("Numero Invalido!");
    }
}
 return 0;
}


