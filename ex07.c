#include <stdio.h>

void main()
{
  char str[100];
  int i, j;
  
  printf("Digite uma frase: ");
  fgets(str, 100, stdin);
  for (i = 0, j = 0; str[i] != '\0'; i++)
  {
    if (str[i] != ' ')
    {
      str[j] = str[i];
      j++;
    }
  }
  str[j] = '\0';
  printf("%s", str);
}
