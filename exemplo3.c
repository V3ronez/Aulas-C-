#include<stdio.h>
int main (void){
    float num1, num2, num3, num4, soma;
    printf("Digite quatro numeros: ");
    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%f",&num3);
    scanf("%f",&num4);

    if(num1 > num2 && num1 > num3 && num1 > num4){
        soma = (num2+num3+num4);
    }
    else if(num2 > num1 && num2 > num3 && num2 > num4){
        soma = (num1+num3+num4);
    }
    else if(num3 > num1 && num3 > num2 && num3 > num4){
        soma = (num1+num2+num4);
    }
    else if(num4 > num1 && num4 > num2 && num4> num3){
        soma = (num1+num2+num3);
        printf("A soma dos tres menos numeros e igual a: %.2f",soma);
    }
    else{
        printf("Numero invalido!");
    }
return 0;
}
