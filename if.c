#include<stdio.h>
int main (void){
    float n1, n2, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    //calculos
    media = (n1+n2) / 2;

    if(media >= 5){
        printf("Aprovado");
    }
    else{
        printf("Reprovado");
    }
return 0;
}
