#include <stdio.h>
#include <stdlib.h>
int main(){
 	int i, idade, maior_idade=0,menor_idade=100;
	for(i=0;i<3;i++){
		printf("Informe a idade da %d pessoa: ",i+1);
 		scanf("%d", &idade);
        if (idade > maior_idade){
            maior_idade=idade;
        }
        if (idade < menor_idade){
            menor_idade = idade;
        }
	 } 
     printf("A maior idade foi :%d",maior_idade);
     printf("\nA menor idade foi: %d", menor_idade);
 return 0;
}

