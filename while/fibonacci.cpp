#include <stdio.h>
#include <conio.h>
main (void)
{
    int cont = 1;  //contador do laço
    float fibonacci, a, b; //variáveis reais
    a = 1;
    b = 0;

    while (fibonacci <= 500){
        fibonacci = (a + b);
        b = a;
        a = fibonacci;
        printf("\n resultado: %2.f",fibonacci);
    }
}