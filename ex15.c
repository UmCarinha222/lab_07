#include <stdio.h>
#include <string.h>

void main()
{
  char str1[20], str2[20], c1, c2, op, sub[20];
  int i, count = 0, pos, tam;

  do
  {    
    printf("\n(a) Ler uma string S1 (tamanho máximo 20 caracteres);\n");
    printf("(b) Imprimir o tamanho da string S1;\n");
    printf("(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;\n");
    printf("(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;\n");
    printf("(e) Imprimir a string S1 de forma reversa;\n");
    printf("(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;\n");
    printf("(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário;\n");
    printf("(h) Verificar se uma string S2 é sub de S1. A string S2 deve ser informada pelo usuário;\n");
    printf("(i) Retornar uma sub da string S1. Para isso o usuário deve informar a partir de qual posição deve ser criada a sub e qual é o tamanho da sub.\n");
    printf("Digite a opção desejada:\n");
    scanf("%c", &op);
    getchar();

    switch (op)
    {
    case 'a':
      printf("\nDigite a string S1:\n");
      fgets(str1, 20, stdin);
      str1[strlen(str1) - 1] = '\0';
      break;
    case 'b':
      printf("O tamanho da string S1 é %d\n", strlen(str1));
      break;
    case 'c':
      printf("\nDigite a string S2: ");
      fgets(str2, 20, stdin);
      printf(strcmp(str1, str2) ? "As strings sao diferentes\n" : "As strings sao iguais\n");
      break;
    case 'd':
      printf("\nDigite a string S2: ");
      fgets(str2, 20, stdin);
      printf("O resultado da concatenação é \"%s\"\n", strcat(str1, str2));
      break;
    case 'e':
      for (i = strlen(str1) - 1; i >= 0; i--)
      {
        printf("%c", str1[i]);
      }
      printf("\n");
      break;
    case 'f':
      printf("\nDigite o caractere: ");
      scanf(" %c", &c1);
      for (i = 0; str1[i] != '\0'; i++)
      {
        if (str1[i] == c1)
        {
          count++;
        }
      }
      printf("\nO caractere %c aparece %d vezes na string S1\n", c1, count);
      break;
    case 'g':
      printf("\nDigite o caractere C1: ");
      scanf(" %c", &c1);
      printf("\nDigite o caractere C2: ");
      scanf(" %c", &c2);
      for (i = 0; str1[i] != '\0'; i++)
      {
        if (str1[i] == c1)
        {
          str1[i] = c2;
          break;
        }
      }
      printf("A string S1 agora é %s\n", str1);
      break;
    case 'h':
      printf("\nDigite a string S2: ");
      fgets(str2, 20, stdin);
      if (strstr(str1, str2) != NULL)
      {
        printf("A string S2 é sub de S1\n");
      }
      else
      {
        printf("A string S2 não é sub de S1\n");
      }
      break;
    case 'i':
      printf("\nDigite a posição: ");
      scanf("%d", &pos);
      printf("\nDigite o tamanho: ");
      scanf("%d", &tam);
      
      for (i = pos; i <= tam; i++)
      {
        sub[i] = str1[pos + i];
      }
      sub[i + 1] = '\0';

      printf("A sub é %s\n", sub);
      break;
    }
  } while (op >= 'a' || op <= 'i');
}
