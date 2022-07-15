#include <stdio.h>
#include <conio.h>
main (void )
{
    int calc;
    float valor1, soma;

    printf ("Informe o valor total a ser pago:");
    scanf("%f", &valor1); 
    printf ("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf ("#  Informe o metodo de pagamento:              #\n");
    printf ("#      a vista (1), a prazo (2)                 #\n");
    printf ("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    scanf("%d", &calc); 
    switch ( calc )
        {
        case 1 :
            soma = valor1-((valor1*10)/100);
            printf ("Valor do produto a vista: %2.f",soma);
            break;
        
        case 2 :
            printf ("Valor do produto a prazo: %2.f",valor1);
            break;
        default : 
            printf ("#############################################\n");
            printf ("#                                           #\n");
            printf ("#             Valor invalido!               #\n");
            printf ("#         Entre com um valor de 1 a 2       #\n");
            printf ("#                                           #\n");
            printf ("#############################################\n");
	}
	
	getch();
}

