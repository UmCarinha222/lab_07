#include <stdio.h>

void main()
{
  char str[100];
  int i, j;
  printf("Digite uma palavra: ");
  fgets(str, 100, stdin);
  printf("Digite 2 numeros positivos: ");
  scanf("%d %d", &i, &j);
  for (; i <= j; i++)
  {
    printf("%c", str[i]);
  }
  printf("\n");
}
