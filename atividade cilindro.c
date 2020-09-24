#include<stdio.h>
#define pi 3.1415

int main(void){

    char nome [15];
    float altura, raio, area;

    printf("Nome do projeto: ");
    scanf("%s", &nome);

    printf("Digite a altura:");
    scanf("%f", &altura);

    printf("Digite o raio:");
    scanf("%f", &raio);

    area = 2 * pi * raio * altura;

    printf("\nO nome do projeto e: %s", nome);
    printf("\nA area e de: %.2f", area);
    printf("\n\nBom trabalho fofo :)");


return 0;
    }
