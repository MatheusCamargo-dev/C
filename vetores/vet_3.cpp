#include <stdio.h>
#include <stdlib.h>
int main(){
 	float maior=0,menor=100;
 	float nota[4];
    int i, j;
	for(i=0;i<4;i++){
		printf("Informe a nota do aluno %d: ",i+1);
 		scanf("%f", &nota[i]);
	 } 
   for(i=0;i<4;i++){
        for (j=0;j<4;j++){
            if (nota[i] > maior){
            maior = nota[i];
            }
            if(nota[i] < menor){
                menor = nota[i];
            }
        }   
    } 
    printf("==============================");
    printf("\n Maior nota: %2.f",maior);
    printf("\n Menor nota: %2.f",menor);

 return 0;
}

