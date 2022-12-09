#include <stdio.h>

void main()
{
  char str[100], l1, l2;
  int i;
  printf("Digite uma palavra: ");
  fgets(str, 100, stdin);
  printf("Digite a l1 e em seguida a l2: ");
  scanf("%c %c", &l1, &l2);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == l1)
    {
      str[i] = l2;
    }
  }
  printf("%s", str);
}
