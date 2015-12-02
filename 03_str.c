#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
  char str [100];
  char letra[5];
  printf("Digite uma palavra: \n");
  gets (str);
  printf("Digite uma letra \n");
  gets(letra);
  int i = 0;
  int soma = 0;
  for (i=0; i < strlen(str); i++)
  {
    if (str[i] == letra[0])
    {
      soma++;
    }
  }
  printf("A palavra %s possui %d ocorrencias da letra %1s.\n", str, soma, letra);
}
