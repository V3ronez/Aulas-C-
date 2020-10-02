#include<stdio.h>
int main(){
    int numero,numero_resp=1;

    printf("Digite um numero:"); //recebendo o numero do usuario
    scanf("%d",&numero);
    if(numero<=0){
        printf("Numero invalido!"); //invalidando numero 0 || negativos
    }
    else if(numero>0){
        for( ;numero>=1;numero--){
            numero_resp = numero_resp*numero;
            //or mumero_resp *= numero;
        }
        printf("O fatoral do e %d",numero_resp); //numero fatorado.
    }

return 0;
}
