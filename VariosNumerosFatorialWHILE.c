#include<stdio.h>
int main(){
    int num, fat, cont;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&num);

    while(num>=0){
        for(fat = 1, cont = num; cont >= 1; cont--){
            fat *= cont;
        }
        printf("O fatorial de %d e %d", num, fat);
        printf("Digite um novo numero inteiro positivo!");
        scanf("%d",&num);
    }



return 0;
}
