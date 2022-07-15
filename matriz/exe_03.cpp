#include <stdio.h>
#include <stdlib.h>
int main(){
 	int i,j, contpar=0, contimp=0;
 	int num [3][3];
    int mult [3][3];
    
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\n Informe um valor no elemento [%d][%d]:",i,j);
            scanf("%d",&num[i][j]);
        }
    }
    printf("\n=======================================");
    printf("\n         Valores originais:");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nElemento [%d][%d]:%d",i,j,num[i][j]);
        }
    }
    printf("\n=======================================");
    printf("\n        Valores multiplicados por 5:");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            mult[i][j]=num[i][j]*5;
            printf("\nElemento [%d][%d]:%d",i,j,mult[i][j]);
        }
    }
 return 0;
}