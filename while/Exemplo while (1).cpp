//imprime n�meros de 1 ate 10 em ordem crescente.

#include <stdio.h>

int main(void)
{
int contador = 10; //declarando e inicializando a vari�vel de controle
		
	while (contador >=1) // Testando a condi��o V ou F
	{
		printf("%d \n", contador);  //Executando um comando dentro do la�o
		
		contador--; //atualizando a vari�vel de controle
	} 
return 0;
}

