#include <stdlib.h>
#include <stdio.h>

main() {
int VET[15];
int I; // Indice do vetor

 for (I=0; I<=14; I++) { // Carrega o Vetor
     printf("Entre com o valor para a posicao %d do vetor:\n",I);
     scanf("%d",&VET[I]);
 }
 
 
 system("CLS"); // Limpa a TELA
 I = 0;
 
	for(I=0; I<14;I++)
	printf("Valores originais: %d\n",VET[I]); 
	
 while ((I<=14) & ((VET[I] % 3) != 0)) { //  Pesquisa vetor 
     I++;
 }
 if (I > 14) { // Verifica se existe multiplo de 3
    printf("Nao existe multiplo de 3 no vetor \n");
 }
 else {
    printf("O primeiro multiplo de 3 esta na posicao %d do VETOR\n",I);
 }
 system("PAUSE"); // Espera por acionamento de alguma tecla
}
