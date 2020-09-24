#include<stdio.h>
    int main(void){
    float temp_c, temp_f, temp_k;

    printf("Digite a temp em Celsius: ");
    scanf("%f", &temp_c);

    temp_f = (9*temp_c)/5 + 32;
    temp_k = temp_c + 273;

    printf("A temperatura %2.fC equivale a %2.fK e a %2.fF", temp_c, temp_k, temp_f);


    return 0;
    }
