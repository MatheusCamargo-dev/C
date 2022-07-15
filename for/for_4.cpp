#include <stdio.h>
#include <conio.h>
main (void)
{
    int valor, calc, cont;
    printf("Informe um numero a mostrar a tabuada: ");
    scanf("%d", &valor);
    for (cont=1;cont<=10;cont++ ){
        calc = (valor * cont);
        printf("\n %d x %d = %d", valor, cont, calc);
    }
}