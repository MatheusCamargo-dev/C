#include <stdio.h>
#include <stdlib.h>
int main(){
 	int i,j;
 	int valores[5], maior=0;
	for(i=0;i<5;i++){
		printf("Informe um numero %d: ",i+1);
 		scanf("%d", &valores[i]);
	 } 
 		//EXIBE EM ORDEM INVERSA
    printf("\n::: Numeros em ordem inversa :::\n");
    for(i=4;i>=0;i--){
        {
            printf("%d\n",valores[i]);
        }
    }
 return 0;
}

