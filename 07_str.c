#include<stdio.h>
#include<stdlib.h>

int main()
{
char nome [50];
char letras [27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'W', 'Y', 'X', 'Z'};

printf("\n Digite seu nome com iniciais maiusculas: ");
gets(nome);
int i, j;

for (i=0; i<strlen (nome); i++)
{
    for(j=0; j<27; j++)
    {
      if (nome[i] == letras[j])
        printf("%c", nome[i]);
    }
}
return(0);
}
