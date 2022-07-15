#include <stdio.h>
#include <stdlib.h>
int main(){
 	int i,j, soma=0, sub=0;
 	int numeros[10], impar[12], par[12];
	for(i=0;i<10;i++){
		printf("Informe um numero %d: ",i+1);
 		scanf("%d", &numeros[i]);
	 } 
    for(i=0;i<10;i++){
        if (numeros[i]%2==0){
            soma += numeros[i];
        }
        else{
           sub -= numeros[i];
        }  
    }	
    printf("\nSoma dos valores pares: %d",soma);
    printf("\nSubtracao dos demais valores %d",sub);
 return 0;
}

