#include <stdio.h>
#include <conio.h>
main (void)
{
    int flag =1, cont=0;
    float valor, soma = 0, media;
    while (flag != -1){
        printf("Informe um valor a ser calculada: ");
        scanf("%f", &valor);
        if (valor == -1){
            flag = -1;
        }
        else{
            soma += valor;
            cont += 1;
        }
    }
    media = soma/cont;
    printf("A media dos valores informados eh igual:%3.f", media);
}