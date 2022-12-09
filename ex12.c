#include <stdio.h>

void main()
{
  char str[100];
  int i;
  
  printf("Digite algo: ");
  fgets(str, 100, stdin);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] = (str[i] - 'A' + 3) % 26 + 'A';
    }
    else if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = (str[i] - 'a' + 3) % 26 + 'a';
    }
  }
  printf("%s", str);
}
