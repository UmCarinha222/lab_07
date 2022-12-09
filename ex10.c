#include <stdio.h>

void main()
{
  char nome[100];
  float valor, desconto, valor_a_vista;
  
  printf("Nome do produto: ");
  fgets(nome, 100, stdin);
  printf("Valor do produto: ");
  scanf("%f", &valor);
  desconto = valor * 0.1;
  valor_a_vista = valor - desconto;
  printf("\nNome: %s\n", nome);
  printf("Valor total: %.2f\n", valor);
  printf("Desconto: %.2f\n", desconto);
  printf("Valor a vista: %.2f\n", valor_a_vista);
}
