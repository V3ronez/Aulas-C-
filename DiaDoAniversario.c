#include<stdio.h>
int main(){
    int count;
    int valorlido;
    int diaAniversario = 01;

    printf("Tente acertar o dia do meu aniversario!! \n\nEm que dia voce acha que eu comemoro o meu aniversario?\n");
    for(count=0;;count++){
        scanf("%i", &valorlido);
        if ((valorlido<1)||(valorlido > 31))
            printf("\nEsse nao e um dia valido. Tente novamente:");
        else{
                if (valorlido != diaAniversario){
                    printf("\nVoce errou o dia! Tente novamente:");
                }
                else{
                    printf("Parabens!! Voce acertou o dia! \n\n");
                    break;
                }
        }
    }
    return 0;
}
