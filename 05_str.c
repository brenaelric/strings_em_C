#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int quantVogais (char* nome,int x)
{
  int i;
  int soma = 0;
  for ( i=0; i<=x; i++)
  {
    if (nome[i]=='a' ||
        nome[i]=='A' ||
        nome[i]=='e' ||
        nome[i]=='E' ||
        nome[i]=='i' ||
        nome[i]=='I' ||
        nome[i]=='o' ||
        nome[i]=='O' ||
        nome[i]=='u' ||
        nome[i]=='U')
    {
      soma ++;
    }
  }
  return soma;
}

int main ()
{
  char palavra [100];
  printf ("Digite uma palavra: \n");
  gets (palavra);
  int i = quantVogais(palavra,strlen(palavra));
  printf ("A palavra %s possui %d vogais.\n", palavra, i);
}
