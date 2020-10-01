#include<stdio.h>
int main(){
    float n1, n2, media;
    int i;

    for(i=1; i <= 4; i++){
        printf("Digite a nota N1: ");
        scanf("%f", &n1);
        printf("Digite a nota N2: ");
        scanf("%f", &n2);
        media = (n1+n2)/2;
        printf("A media do aluno %d e: %.2f\n", i, media);
    }
return 0;
}
