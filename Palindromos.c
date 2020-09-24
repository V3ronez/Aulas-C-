#include<stdio.h>
#include<math.h>
int main(void){
   int num, num1, num2, num3, num4, num5, numrev, numtemp;
   printf("Digite um numero de cinco digitos: ");
   scanf("%d",&num);
   numtemp = num; // variavel para segurar um valor por algum tempo.

        //separar os numeros em 1 digito;
    if(num < 100000 && num > 9999){
        num1 = num % 10;
        num = num / 10;
        num2 = num % 10;
        num = num / 10;
        num3 = num % 10;
        num = num / 10;
        num4 = num % 10;
        num = num / 10;
        num5 = num % 10;
   //inverter o numero.
        num1 = num1*10000;
        num2 = num2*1000;
        num3 = num3*100;
        num4 = num4*10;
        num5 = num5*1;

    numrev = num1 + num2 + num3 + num4 + num5;
    num = numtemp;
        if(numrev == num){
            printf("o numero %d e um palindromo",num);
        }
        else{
            printf("O numero %d nao e um palindromo",num);
        }
    }
    else{
        printf("Digite um valor com cinco digitos");
    }

return 0;
}
