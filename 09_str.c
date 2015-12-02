#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char nome[30];
int i;
int caunt = 0;

printf("Digite uma palavra: ");
gets(nome);

for (i=0; i < strlen(nome); i++)
{
 if (nome[i] == nome [i+1])
    caunt++;
}
caunt = caunt * 2;
printf ("O nome tem %d letras repitidas.", caunt);

return(0);
}
