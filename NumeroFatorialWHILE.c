#include<stdio.h>
int main(){
    int numero, fat, cont;
    printf("Digite um numero:");
    scanf("%d", &numero);
    if(numero<0){
        printf("ERRO,NUMERO INVALIDO!");
    }
    else{
        cont = numero;
        fat = 1;
        while(cont >=1){
            fat *= cont;
            cont--;
        }
        printf("O fatorial de %d e %d",numero, fat);
    }


return 0;
}
