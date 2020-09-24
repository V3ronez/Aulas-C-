#include<stdio.h>
#include<math.h>
int main(void){
    int num, resto, quociente, soma, somafinal;
    printf("Digite um numero de quatro digitos: ");
    scanf("%d",&num);

    resto = num%100;              //para dividir um numero de 4 digito basta /100
    quociente = num/100;
    soma = resto + quociente;
    somafinal = (soma*soma);

    if((num < 1000) || (num > 9999)){
        printf("ERRO!");
    }
    else if(somafinal == num){
        printf("Numero valido!");
    }
    else{
        printf("Numero Invalido!");
    }
return 0;
}
