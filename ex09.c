#include <stdio.h>
#include <string.h>

void main()
{
  char str[5][100];
  float cons[5], maior = 0;
  int i, j, p;

  for (i = 0; i < 5; i++)
  {
    printf("Digite o modelo do carro %d:\n", i + 1);
    fgets(str[i], 100, stdin);
    str[i][strlen(str[i]) - 1] = '\0';

    printf("Digite o consumo do carro %d:\n", i + 1);
    scanf("%f", &cons[i]);    
    printf("\n");
    getchar();
  }

  for (i = 0; i < 5; i++)
  {
    if (cons[i] > maior)
    {
      maior = cons[i];
      p = i;
    }
  }
  printf("O carro mais economico eh o %s\n", str[p]);

  for (i = 0; i < 5; i++)
  {
    printf("O carro %s consome %.2f litros para percorrer 1000km\n", str[i], 1000 / cons[i]);
  }
}
