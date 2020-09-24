#include<stdio.h>
#include<math.h>
int main(void){
    int num;
    printf("Digite um numero: ");
    scanf("%i",&num);

    if((num%3)== 0 &&(num%5)==0){
        printf("Numero valido!");
    }
    else{
        printf("Numero invalido!");
    }
return 0;
}
