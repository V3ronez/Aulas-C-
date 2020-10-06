#include<stdio.h>
int main(){

    float AlturaZe = 1.10, AlturaChico = 1.50;
    int ano=0;

    while(AlturaZe < AlturaChico){
        AlturaChico += 0.02;
        AlturaZe += 0.03;
        ano++;

    }
    printf("Vai demorar %d anos para que Ze chegue na altura de Chico", ano);


return 0;
}
