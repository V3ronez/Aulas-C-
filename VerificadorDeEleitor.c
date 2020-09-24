#include<stdio.h>
int idade;
int main(void){
    int idade;

    printf("Digite a idade a ser verificada: ");
    scanf("%d", &idade);

    if(idade<0){
        printf("Idade Inexistente!");
    }
    if(idade<16){
        printf("Nao eleitor.");
    }
        else if(idade>=18 && idade<=65){
            printf("Eleitor Obrigatorio.");
        }
        else if(idade>=16 && idade<18 || idade>65){
            printf("Eleitor Facultativo");
        }
return 0;
}
