#include<stdio.h>
int main (void){
    int num;

    printf("Digite um numero: ");
    scanf("%i",&num);
    //logica
    if(num < 0){
        printf("ERRO");
    }
    else if((num%3)==0 && (num%5)==0){
        printf("O %i e divisivel por 3 e por 5!",num);
    }
    else if((num%5)==0){
        printf("O %i e apenas divisivel por 5!",num);
    }
    else if((num%3)==0){
        printf("O %i e apenas divisivel por 3!",num);
    }
    else{
        printf("Nao e divisivel nem por 3 nem por 5");
    }
return 0;
}
