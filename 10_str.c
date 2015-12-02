#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char nome[100];
  int i = 0;
  int count = 0;
  printf("Digite um nome qualquer: \n");
  gets (nome);
  for (i = 0; i < strlen(nome); i++)
  {
    nome[i] = '-';
    count ++;
  }
  printf("a palavra %s possui %d subistituições\n", nome, count);
}
