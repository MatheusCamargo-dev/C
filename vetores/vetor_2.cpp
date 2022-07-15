#include <stdio.h>
#include <stdlib.h>
int main(){
 	int i,j, I=0;
 	int valores[5], maior=0;
	for(i=0;i<5;i++){
		printf("Informe um numero %d: ",i+1);
 		scanf("%d", &valores[i]);
	 } 
    while ((I<=14) & ((valores[I] % 3) != 0)) { //  Pesquisa vetor 
     I++;
    }
    if (I > 14) { // Verifica se existe multiplo de 3
        printf("Nao existe multiplo de 3 no vetor \n");
    }
    else {
        printf("O primeiro multiplo de 3 esta na posicao %d do VETOR\n",I);
    }
 return 0;
}

