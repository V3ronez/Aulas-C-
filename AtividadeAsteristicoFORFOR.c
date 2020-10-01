#include<stdio.h>
int main(){
    int m, i, cont;

    printf("Digite um numero para m: "); //numero de linhas
    scanf("%d", &m);
    for(i=1; i <=m; i++){
        for(cont=1; cont <=i; cont++){
            printf("*");
        }
        printf("\n");
    }


return 0;
}
