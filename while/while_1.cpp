#include <stdio.h>
#include <conio.h>
main (void)
{
    int cont = 1;
    float nota, soma = 0, media;
    while (cont < 5){
        printf("Informe a %d nota a ser calculada: ", cont);
        scanf("%f", &nota);
        soma += nota;
        cont ++;
    }
    media = soma/4;
    printf("A media das notas informado eh igual:%3.f", media);
}