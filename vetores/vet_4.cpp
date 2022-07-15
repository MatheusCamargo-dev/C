#include <stdio.h>
#include <stdlib.h>
int main(){
 	int i,j, contpar=0, contimp=0;
 	int numeros[12], impar[12], par[12];
	for(i=0;i<12;i++){
		printf("Informe um numero %d: ",i+1);
 		scanf("%d", &numeros[i]);
	 } 
    for(i=0;i<12;i++){
        if (numeros[i]%2==0){
            par[contpar] = numeros[i];
            contpar += 1;
        }
        else{
            impar[contimp] = numeros[i];
            contimp +=1;
        }  
    }	
    for(i=0;i<contpar;i++){
        printf("\nPar:%d \n",par[i]);
    }
    for(i=0;i<contimp;i++){
        printf("\nImpar:%d \n",impar[i]);
    }  
 return 0;
}

