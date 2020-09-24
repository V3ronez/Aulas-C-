#include<stdio.h>
#include<math.h> //biblioteca matematica.

    int main(void){
        int x, y;

        printf("Digite o valo de x: ");
        scanf("%d", &x);

        y = pow(x,2); // exponenciação
        z = pow(x,3);

        printf("O valor de x ao quadrado e %d",y);
        printf("O valor de x ao cubo e %d",z);


return 0;
}
