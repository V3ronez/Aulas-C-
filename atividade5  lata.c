#include<stdio.h>
#include<math.h>
#define preco_a 100
#define pi 3.1415
int main (void){
    float raio, altura, area_lt, area_b, area_l, custo;
    //area_ lt = area lata, area_b = area base, area_l = lado.

    printf("Digite o raio da lata: ");
    scanf("%f", &raio);

    printf("Digite a altura da lata: ");
    scanf("%f", &altura);

    area_b = pi*pow(raio,2);
    area_l = 2*pi*raio*altura;
    area_lt = area_b + area_l;
    custo = area_lt * preco_a;

    printf("A area da lata e de %.2fm", area_lt);
    printf("\nO custo da lata sera de R$%.2f", custo);


return 0;
}
