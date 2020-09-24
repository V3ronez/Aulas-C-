#include<stdio.h>
int main(void){
    float a, b, c, i;
    printf("Digite tres numeros: ",a);
    scanf("%f",&a);
    printf("Digite tres numeros: ",b);
    scanf("%f",&b);
    printf("Digite tres numeros: ",c);
    scanf("%f",&c);

    //logica
    if(a<=0 || b <= 0 || c <= 0){
        for(i=0;i<45;i++){;
        printf("*");
        i=i+1;;
        }
        printf("\nERROR! Numero invalido.\n");
        for(i=0;i<45;i++){;
        printf("*");
        i=i+1;;
        }
    }
    else if(a==b && a==c && b==c){
        printf("E um triangulo equilatero");
    }
    else if(a==b || b==c || c==a){
        printf("E um triangulo isosceles");
    }
    else if(a!=b && b!=c && c!=a){
        printf("E um triangulo escaleno");
    }
return 0;
}
