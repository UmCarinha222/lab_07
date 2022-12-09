#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int cont, tam;
    char nome[30];
    
    printf("Informe um nome: ");
    gets(nome);
    
    tam = strlen(nome);
    
    for(cont=tam;cont>=0;cont--){ 
        printf("%c",nome[cont]);
    }

    return 0;
    
}
