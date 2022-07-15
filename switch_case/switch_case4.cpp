#include <stdio.h>
#include <conio.h>
main (void )
{
    char op;

    printf ("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf ("#  Informe qual o seu genero M/F: \n");
    printf ("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    scanf("%c", &op); 
    switch (op)
        {
        case 'M' :
            printf ("Seu sexo eh Masculino!");
            break;
        
        case 'F' :
            printf ("Seu sexo eh Feminino!");
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

