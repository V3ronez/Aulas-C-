#include<stdio.h>

int main(void) {
    float x, y;
    int z, w, r;
    x = 5;
    z = 14;

    y = x /2;
    w = z /2;
    r = z %4; // operador resto => realiza divisão e retorna resto.
             // o operador resto so pode ser usado quando as var forem int

    printf("O valor de y e %.2f", y);
    printf("\nO valor de w e %d", w);
    printf("\nO valor de r e %d", r);

return 0;
}
