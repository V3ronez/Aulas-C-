#include<stdio.h>
int main(void){
    char numerofun [20];
    int numfilhos;
    float numhora, valorhora, valorfam, salarioh, salariofam, salariototal;

    printf("Digite o numero do funcionario: ");
    scanf("%s", &numerofun);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &numhora);
    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valorhora);
    printf("Digite o numero de filhos: ");
    scanf("%d", &numfilhos);
    printf("Digite o valor do salario familia: ");
    scanf("%f", &valorfam);

    //calculos
    salarioh = numhora*valorhora;
    salariofam = numfilhos*valorfam;
    salariototal = salarioh + salariofam;

    printf("O salario final do funcionario %s sera de R$%.2f",numerofun, salariototal);

return 0;
}
