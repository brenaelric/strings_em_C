#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int evogal(char v)
{
  char* vogais = "aeiouAEIOU";
  int k =0;
  for (k =0; k < 10; k++)
  {
    if (v == vogais[k])
      return 1;
  }
  return 0;
}

int editongo (char* palavra)
{
  int i = 0;
  int count = 0;
  for(i=0; i < strlen(palavra) - 1; i++)
  {
    int j = (i + 1);
    if (evogal(palavra[i]) && evogal(palavra[j]))
    {
      count++;
      i++;
    }
  }
  return count;
}

int main()
{
char palavra [100];
printf("Digite uma palavra: \n");
gets (palavra);
int i = editongo(palavra);
printf("A palavra %s possui %d ditongos ou hiatos.\n", palavra, i);
}
