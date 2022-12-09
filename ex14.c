#include <stdio.h>

void main()
{
  char str1[100], str2[100];
  int i, j, n;
  
  printf("Digite uma palavra: ");
  fgets(str1, 100, stdin);
  printf("Digite outra palavra: ");
  fgets(str2, 100, stdin);
  printf("Digite um numero: ");
  scanf("%d", &n);
  for (i = 0; str1[i] != '\0'; i++)
  {
  }
  for (j = 0; j < n; j++)
  {
    str1[i + j] = str2[j];
  }
  str1[i + j] = '\0';
  printf("%s", str1);
}
