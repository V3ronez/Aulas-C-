#include<stdio.h>
#include<string.h>
int main(void){
    char cod[15];
    float qtd, valor;
    char tipo [10];

    printf("Digite o codigo do cliente: ");
    scanf("%s",&cod);
    printf("Digite a quantidade gasta: ");
    scanf("%f",&qtd);
    printf("Digite o tipo do client: ");
    scanf("%s",&tipo);

    if(qtd < 0){
        printf("ERRO! Numero invalido!");
    }
        else if(stricmp(tipo,"residencial")==0){
        valor=5+(0.05*qtd);
        printf("O valor sera de R$%.2f.", valor);
    }
        else if(strcmp(tipo,"comercial")==0){
        valor = 500+(qtd-80)*0.25;
        printf("O valor sera de R$%.2f.", valor);
    }
        else if(strcmp(tipo,"industrial")==0){
        valor = 800+(qtd-100)*0.04;
        printf("O valor sera de R$%.2f.", valor);
    }
    else{
        printf("\nERRO! Usuario nao classificado!");
    }
return 0;
}
