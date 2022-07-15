#include <stdio.h>
#include <conio.h>
int main (void )
{
    int valor1, valor2, calc, soma;

    printf ("Informe um valor a ser calculado:");
    scanf("%d", &valor1); 
    printf ("Informe o segundo valor a ser calculado:");
    scanf("%d", &valor2); 
    printf ("\n###################################################################\n");
    printf ("#  Qual das opcoes de calculo voce deseja calcular?               #\n");
    printf ("# (Operacoes: soma(1), subtracao(2), divisao(3), multiplicacao(4).#\n");
    printf ("#                                                                 #\n");
    printf ("###################################################################\n");
    scanf("%d", &calc); 
    switch ( calc )
        {
        case 1 :
            soma = (valor1+valor2);
            printf ("Resultado: %d",soma);
            break;
        
        case 2 :
            soma = (valor1-valor2);
            printf ("Resultado: %d",soma);
            break;
        case 3 :
            soma = (valor1/valor2);
            printf ("Resultado: %d",soma);
            break;
        case 4 :
            soma = (valor1*valor2);
            printf ("Resultado: %d",soma);
            break;
        default : 
            printf ("#############################################\n");
            printf ("#                                           #\n");
            printf ("#             Valor invalido!               #\n");
            printf ("#         Entre com um valor de 1 a 4       #\n");
            printf ("#                                           #\n");
            printf ("#############################################\n");
	}
	
	getch();
}

