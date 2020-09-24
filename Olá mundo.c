#include<stdio.h> // incluindo uma nova biblioteca que habilita os comandos printf e scanf

int main(void) // Função principal em C
{
    int x, y; // declarando uma var do tipo inteiro com o nome "x"

    x = 10; // atribui o valor 10 a var x

    printf("\tMeu primeiro programa em C irul festa \n\tSegundo semestre de 2020"); //comando de saida, serve para mostrar uma info na tela

    printf("\n\nHenrique Veronez");

    printf("\n\"Gyn 2\"");

    printf("\nX = %d", x); // Escreve na tela o nome da var "x". %d é a formatação de uma var inteira.

    x = 10;
    y = 2 * x;

    printf("\nX = %d e o dobro de x e igual a %d", x, y);

    return 0; // retornar 0 para a função principal
}
