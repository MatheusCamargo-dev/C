#include <stdio.h>
#include <stdlib.h>
int main(){
 	int i,j;
 	int valores[5], maior=0;
	for(i=0;i<5;i++){
		printf("Informe um numero %d: ",i+1);
 		scanf("%d", &valores[i]);
	 } 
    for(i=0;i<5;i++){
        for (j=0;j<5;j++){
            if (valores[i] > maior){
            maior = valores[i];
            }
        }   
	 } 
     printf("\n============================");
     printf("\nmaior valor: %d", maior);
     printf("\n============================");
 return 0;
}

