#include <stdio.h>
#include <stdlib.h>

int soma(int n1, int n2);
int soma(int n1, int n2){
    if (n1<n2){
        return (n1);
    }
    else if(n2<n1){
        return(n2);
    }
    else{
        return (n1);
    }
}
int main(){	
    int n1, n2, menor;
    printf("Informe um valor:");
    scanf("%d",&n1);
    printf("Informe um valor:");
    scanf("%d", &n2);
    menor = soma(n1, n2);
    printf("O menor valor entre %d e %d eh %d", n1, n2, menor);
 return 0;
}