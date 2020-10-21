#include<stdio.h>
int main(){
    int i, soma=0;
    float numX[5];

    for(i=0;i<5;i++){
    printf("Insira um numero:");
    scanf("%f",&numX[i]);
    soma += numX[i];
    }
    for(i=0;i<5;i++){
        printf("\nposicao %d valor %f", i,numX[i]);
    }
    printf("soma e igual a %d",soma);
return 0;
}
