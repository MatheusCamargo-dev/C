#include <stdio.h>
#include <conio.h>
main (void)
{
    float salario_inicial=1000, aumento, salario_atual, porcentagem=1.5;
    int cont;
    for (cont=2006;cont<=2022;cont++){
        if (cont == 2006){
            aumento = (salario_inicial*porcentagem)/100;
            salario_atual = aumento+salario_inicial;
        }
        if (cont>= 2007){
            aumento += aumento;
            salario_atual= salario_atual+(aumento);
        }
        printf("\naumento R$%2.f do ano %d", aumento, cont);
    }
    printf("\n====================================================");
    printf("\nSalario atual do funcionario: %2.f",salario_atual);
}