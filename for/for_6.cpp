#include <stdio.h>
#include <conio.h>
main (void)
{
    int valor, cont,total=0;

    printf("Informe um numero: ");
    scanf("%d", &valor);
    for (cont=1;cont<=valor;cont++ ){  
      if (valor%cont==0){
          total += 1;
      }
    }
    printf("\nO numero %d foi divisivel %d vezes", valor, total);
    if (total==2){
        printf("\nE por isso o numero %d eh primo!");
    }
    else{
        printf("\nE por isso o numero %d NAO eh primo");
    }
}