#include<stdio.h>
int main(){
    float media, menor_media;
    int i, qtd_alunos;

    printf("Digite a quantidade de alunos: "); //quantidade de alunos
    scanf("%d",&qtd_alunos);

    for(i=1;i <= qtd_alunos ; i++){
        printf("Digite a media do aluno : "); //receber o valor da media
        scanf("%f", &media);
    }
        if(i==1){
            menor_media =  media; // a primeira media é a media mais alta
        }
        else{
            if(menor_media > media){ //comprara a proxima media com a menor media
                menor_media = media;
            }
        }
       printf("A menor media e: %.2f", menor_media);
return 0;
}
