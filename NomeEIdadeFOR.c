#include<stdio.h>
int main(){
    int idade;
    char nome [30];
    int qtd = 0;
    for (int i=0;i < 5;i++){
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf("%s", &nome);
        printf("Digite a idade: ");
        scanf("%i", &idade);
        if(idade <0){
        printf("Idade invalida! Digite novamente.\n");
        i--;
        }
        else{
            if(idade >= 18)
                qtd++;
        }

    }
    printf("A quantidade de pessoas maiores de idade e de &i:", qtd);
    return 0;
}
