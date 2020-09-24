#include<stdio.h>
int main(void){

    int duracao, hora, min, seg, r;
    //entrada dos dados pelo usuario em segundos.
    printf("Digite a quantidade de horas do aluguel: ");
    scanf("%d", &duracao);
    //calculos
    hora = duracao / 3600;
    r = duracao % 3600;
    min = r / 60;
    seg = r % 60;

    printf("A duracao foi de %dh %dmin %dseg", hora, min, seg);

    return 0;
}
