#include<stdio.h>
#include<math.h>
int main(){
    int num,quadrada,cubo,raiz;
    printf("Digite um numero: ");
    scanf("%d",&num);

    while(num != 0){
        quadrada = num*num;
        cubo = pow(num,3);
        raiz = sqrt(num);
        printf("o quadrado de %d e: %d \nRaiz cubica e: %d \nE a raiz quadrada e: %d \n",num,quadrada,cubo,raiz);
        printf("Digite um novo numero: ");
        scanf("%d",&num);
    }
return 0;
}
