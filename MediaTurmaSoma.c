#include<stdio.h>
int main (){
    float media, soma, media_turma;
    int cont;
    soma = 0;
    for (cont = 1; cont <=4; cont++){
        printf("Digite a media do aluno:");
        scanf("%f", &media);
        soma = soma + media;
    }
    media_turma = soma/4;
    printf("A media da turma e: %.2f",media_turma);
return 0;
}
