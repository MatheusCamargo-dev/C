#include <stdio.h>
#include <stdlib.h>
int main(){
 	int i,j, contpar=0, contimp=0;
 	int matriz [3][3];
    int mult [3][3];
    int vet [3];
    
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\n Informe um valor no elemento da matriz[%d][%d]:",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\n===============================================");
    for(j=0;j<3;j++){
            printf("\n Informe um valor no elemento do vetor[%d]:",j);
            scanf("%d",&vet[j]);
        }
    printf("\n=======================================");
    printf("\n         Valores originais da matriz:");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nElemento [%d][%d]:%d",i,j,matriz[i][j]);
        }
    }
    printf("\n         Valores originais do vetor:");
    for(j=0;j<3;j++){
            printf("\nElemento [%d]:%d",j,vet[j]);
        }
    printf("\n=======================================");
    printf("\n        Valores multiplicados do vetor pela matriz:");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            mult[i][j]= matriz[i][j]*vet[i];
            printf("\nElemento multiplicado[%d][%d]:%d",i,j,mult[i][j]);
        }
    }
 return 0;
}