#include<stdio.h>

char cod[10];
float nota1, nota2, nota3, media, media_exer;
int main(void){
    //coletando dados
    printf("Digite o codigo do aluno: ");
    scanf("%s",&cod);
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    printf("Digite a media dos exercicios: ");
    scanf("%f", &media_exer);

    //calculos
    if(media < 0 || media >10 || nota1 < 0 || nota1 >10 || nota2 < 0 || nota2 >10 || nota3 < 0 || nota3 >10 || media_exer < 0 || media_exer >10){
        printf("Nota invalida!");
    }
        media=(nota1+(nota2*2)+(nota3*3)+media_exer)/7;
        if(media > 9.1 && media <=10){
                printf("Media igual a %.2f.\nO aluno %s  esta: Aprovado.\nConceito A.",media,cod);
            }
        else if(media >= 7.6 && media <=9){
            printf("Media igual a %.2f.\nO aluno %s  esta: Aprovado.\nConceito B.",media,cod);
            }
        else if(media >= 6.1 && media <=7.5){
            printf("Media igual a %.2f.\nO aluno %s  esta: Aprovado.\nConceito C.",media,cod);
            }
        else if(media >= 4.1 && media <=6){
            printf("Media igual a %.2f.\nO aluno %s  esta: Reprovado.\nConceito D.",media,cod);
        }
    else{
        printf("Media igual a %.2f.\nO aluno %s  esta: Reprovado.\nConceito E.",media,cod);
        }
return 0;
}
