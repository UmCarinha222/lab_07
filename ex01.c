#include <stdio.h>

void main() {
    char str[100];
    printf("Digite um nome: ");
    fgets(str, 100, stdin);
    printf("%s", str);    
}
