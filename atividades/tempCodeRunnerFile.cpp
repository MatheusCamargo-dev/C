#include <stdio.h>

main()
{
    int idade, cep, sexo;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    printf("Informe o seu CEP:");
    scanf("%d", &cep);

    printf("Informe o seu sexo Masculino/Feminino[1/2]:");
    scanf("%d", &sexo);

    if (sexo==1)
    {
        printf("\nVoce tem %d anos, seu CEP eh %d", idade, cep);
        printf("\nSeu sexo eh Masculino");
    }
    else
    {
       printf("\nVoce tem %d anos, seu CEP eh %d", idade, cep);
       printf("\nSeu sexo e Feminino");
    }

}