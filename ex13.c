#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char palavra[30], palavra_ao_contrario[30];
    int i;

    printf("Digite uma palavra: ");
    gets(palavra);

    fflush(stdin);

    int len = strlen(palavra);

    printf("A palavra digitada de tras para frente foi ");

    for (i = len; i >= 0; i--) {
        printf("%c", palavra[i]);
        palavra[i] = tolower(palavra[i]);

    }

    strcpy(palavra_ao_contrario, palavra); 
    strrev(palavra_ao_contrario); 

    if (strcmp(palavra, palavra_ao_contrario) == 0) 
        printf("\nLogo, [%s] eh um palindromo", palavra);
    else 
        printf("\nLogo,[%s] nao eh um palindromo", palavra);
        
}
