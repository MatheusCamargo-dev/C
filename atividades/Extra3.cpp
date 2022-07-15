#include <stdio.h>
int main()
{
	int sala, capacidade, cadeira, sup;
	 
	printf("Informe o numero da sala: ");
	scanf("%d", &sala);	
	
	printf("Informe a capacidade da sala: ");
	scanf("%d", &capacidade);
	
	printf("Informe o total de alunos matriculados na sala: ");
	scanf("%d", &cadeira);
		
	sup= (capacidade-cadeira);
		
	if (cadeira < capacidade)
	{
		printf("\nSALA DE NUMERO: %d	CAPACIDADE: %d	NUMERO DE CADEIRAS DISPONIVEIS: %d", sala, capacidade, sup);
		printf("\n	A SALA NAO ESTA OCUPADA!!");
	}
	else
		{
			printf("\nSALA DE NUMERO: %d	CAPACIDADE: %d	NUMERO DE CADEIRAS DISPONIVEIS: %d", sala, capacidade, sup);
			printf("\n	A SALA ESTA OCUPADA!!");	
		}
	
}
