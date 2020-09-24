#include<stdio.h>
 int main(void){

    char x;
    int y;
    char w[20] = "Henrique";

    x = '2';
    y = x; // retorna 50 por que é o valor do caracter "2"

    printf("x = %c", x);
    printf("\nY = %d",y);
    printf("\nW = %s", w);

    return 0;
 }
