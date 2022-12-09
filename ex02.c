#include <stdio.h>

int main(){
    char str[30];
    int count;

    printf("Digite uma sequencia de numeros: ");
    scanf("%s", &str);

    for(int i=0; str[i]=='1'; count++){

        count = count++;

    }

    printf("A quantidade que repetiu foi: $d", count);

return 0;
}
