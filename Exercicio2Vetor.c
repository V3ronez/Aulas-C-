#include<stdio.h>
int main(){
    int i,j;
    float numX[5], numY[5];
    for(i=0;i<5;i++){
    printf("Insira um numero:");
    scanf("%f",&numX[i]);
    }
    //invertendo a ordem de X
    for(i=0,j=4;i<5;i++,j--){
    numY[j] = numX[i];
    }
    for(j=0;j<5;j++){
        printf("\ny=%.2f",numY[j]);
    }
return 0;
}
