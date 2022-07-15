#include <stdio.h>
#include <stdlib.h>
int main(){
 	int i,j;
 	int valores[5], maior=0;
	for(i=0;i<5;i++){
		printf("Informe um numero %d: ",i+1);
 		scanf("%d", &valores[i]);
	 } 
     printf("\n================================================");
     printf("\n::: Numeros em ordem original e inversa :::\n");
     j=4;
     for(i=0;i<5;i++){
        printf("\nOriginal:%d \n",valores[i]);
        printf("\nInverso:%d\n",valores[j]);
        j--;
    } 

 return 0;
}

