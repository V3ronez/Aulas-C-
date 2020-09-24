#include<stdio.h>
int main(void){
        char nome[20];
        int x;
        float a;

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua altura: ");
    scanf("%f", &a);

    printf("Digite sua idade: ");
    scanf("%d", &x);

    printf("\nO nome digitado foi: %s", nome);
    printf("\nA idade digitada foi: %d", x);
    printf("\nSua altura e de: %.2f", a);

    return 0;

}
