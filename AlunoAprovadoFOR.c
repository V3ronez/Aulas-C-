#include<stdio.h>
int main(){
    float media;
    int i;

    for(i=1; i <= 4; i++){
        printf("Digite a media dos alunos %d: ",i);
        scanf("%f", &media);
        if(media < 0 || media > 10){
            printf("ERRO!\n");
        }
        if(media < 5){
            printf("Aluno Reprovado\n");
        }
        else{
            printf("Aluno Aprovado\n");
        }
    }
return 0;
}
