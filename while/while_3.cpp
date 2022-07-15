#include <stdio.h>
#include <conio.h>
main (void)
{
    int cont=1, valor;
    
    printf("Informe um valor a ser calculado: ");
    scanf("%d", &valor);
    while (cont <= valor){
        if (cont%2==0){
            printf("\n O %d eh par",cont);
        }
        else{
            printf("\n O %d eh impar", cont);
        }
        cont++;
    }
}