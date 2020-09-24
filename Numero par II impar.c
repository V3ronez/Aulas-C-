#include<stdio.h>
int main(void){
    int num,r;
    printf("Digite um numero: ");
    scanf("%i", &num);
    if(num >= 0){
        r = num%2;
        if(r == 0){
            printf("O numero %i e par!",num);
        }
        else{
            printf("O numero i% e impar!",num);
        }
    }
    else{
        printf("Numerp invalido");
    }
return 0;
}
