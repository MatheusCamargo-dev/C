#include <stdio.h>
#include <conio.h>
main (void)
{
    int cont = 1, valor, calc;
    printf("Informe um numero a mostrar a tabuada: ");
    scanf("%d", &valor);
    while (cont <= 10){
        calc = (valor * cont);
        printf("\n %d x %d = %d", valor, cont, calc);
        cont ++;
    }
}