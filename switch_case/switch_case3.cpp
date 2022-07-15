#include <stdio.h>
#include <conio.h>
main (void )
{
    int calc;
    float valor1, desc, soma;

    printf ("Informe o valor total a ser pago:");
    scanf("%f", &valor1); 
    printf ("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf ("#  Informe qual o tipo de cliente:              #\n");
    printf ("#  cliente comum (1), funcionario (2) ou vip (3)#\n");
    printf ("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    scanf("%d", &calc); 
    switch ( calc )
        {
        case 1 :
            printf ("Desconto para cliente comum(1): %2.f",valor1);
            break;
        
        case 2 :
            soma = valor1-((valor1*10)/100);
            printf ("Desconto para funcionario(2): %2.f",soma);
            break;
        case 3 :
            soma = valor1-((valor1*5)/100);
            printf ("Desconto para clientes vip(3): %2.f",soma);
            break;
        default : 
            printf ("#############################################\n");
            printf ("#                                           #\n");
            printf ("#             Valor invalido!               #\n");
            printf ("#         Entre com um valor de 1 a 3       #\n");
            printf ("#                                           #\n");
            printf ("#############################################\n");
	}
	
	getch();
}

