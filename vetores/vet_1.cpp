#include <stdio.h>
#include <stdlib.h>
int main(){
 	int i,j;
 	int numeros[10];
	for(i=0;i<10;i++){
		printf("Informe um numero %d: ",i+1);
 		scanf("%d", &numeros[i]);
	 } 
     //EXIBE EM ORDEM NORMAL
    printf("\n::: Numeros em ordem normal :::\n");
    for(j=0;j<10;j++){
        {
            printf("%d\n",numeros[j]);
        }
    }
 		//EXIBE EM ORDEM INVERSA
    printf("\n::: Numeros em ordem inversa :::\n");
    for(i=9;i>=0;i--){
        {
            printf("%d\n",numeros[i]);
        }
    }
 return 0;
}

