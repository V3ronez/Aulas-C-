#include<stdio.h>
#include<math.h>
int main(void){
    float x,y;
    printf("Digite um numero:")
    scanf("%f", &x

    if(x < 1){
        y = x
    }
    else if(x == 1){
        y = 0
    }
    else if(x > 1){
        y = pow (x,2)
    }
    printf("O valor de Y e: %.2f",y)
    return 0;
}
