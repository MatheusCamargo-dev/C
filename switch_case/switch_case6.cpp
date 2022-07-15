#include <stdio.h>
#include <conio.h>
main (void )
{
    int calc;
    float valor1, soma;
    char letra;

    printf ("Informe uma letra:");
    scanf("%c", &letra); 
    switch ( letra )
        {
        case 'A' :
            printf ("A letra %c eh uma vogal!",letra);
            break;
        
        case 'E' :
            printf ("A letra %c eh uma vogal!",letra);
            break;
        case 'I' :
            printf ("A letra %c eh uma vogal!",letra);
            break;
        
        case 'O' :
            printf ("A letra %c eh uma vogal!",letra);
            break;
        case 'u' :
            printf ("A letra %c eh uma vogal!",letra);
            break;
        default : 
             printf ("A letra %c eh uma consoante!",letra);
	}
	
	getch();
}

