#include <stdlib.h>
#include <stdio.h>

main() {
int VET[15];
int I; 
int NUM; // Numero para verificaçao

 for (I=0; I<=14; I++) { // Carrega o Vetor
     printf("Entre com o valor para a posicao %d do vetor:\n",I);
     scanf("%d",&VET[I]);
 }
 system("CLS"); // Limpa a TELA
 printf("Entre com o valor para a pesquisa:\n");
 scanf("%d",&NUM);
 I = 0; 
 while ((VET[I] != NUM) && (I<=14)) { 
    I = I + 1;
 }
 if (I > 14) { // Verifica se encontrou
    printf("O valor %d na esta presente no VETOR. \n",NUM);
 }
 else {
    printf("Valor %d foi encontrado em VET[%d]\n",NUM,I);
 }
 
 printf("Valores inversos: \n");
	for(I=13; I>=0;I--)
		printf("%d\n", VET[I]);
		
 system("PAUSE"); // Espera por acionamento de alguma tecla
}
