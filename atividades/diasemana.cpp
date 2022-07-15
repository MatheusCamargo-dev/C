#include <stdio.h>
#include <conio.h>
int main (void )
{
int valor; // armazena valor inteiro em valor

printf ("#############################################\n");
printf ("#                                           #\n");
printf ("#         Entre com numero de 1 a 7         #\n");
printf ("#                                           #\n");
printf ("#############################################\n");

scanf("%d", &valor); // le valor

switch ( valor ) //testa a vari�vel
	{
	case 1 :
		printf ("Domingo\n");
		break;
	
	case 2 :
		printf ("Segunda-feira\n");
		break;
	
	case 3 :
		printf ("Ter�a-feira\n");
		break;
	
	case 4 :
		printf ("Quarta-feira\n");
		break;
	
	case 5 :
		printf ("Quinta-feira\n");
		break;
	
	case 6 :
		printf ("Sexta-feira\n");
		break;
	
	case 7 :
		printf ("Sabado\n");
	break;
	
	default : //caso n�o seja nenhuma das op��es o default serve como sa�da e aviso que o usu�rio digitou uma op��o inv�lida (que n�o consta no case)
		printf ("#############################################\n");
		printf ("#                                           #\n");
		printf ("#             Valor invalido!               #\n");
		printf ("#         Entre com numero de 1 a 7         #\n");
		printf ("#                                           #\n");
		printf ("#############################################\n");
	}
	
	getch();
//return 0;
}

