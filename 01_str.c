#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char maiuscula(char* str) {
  int i = 0;
  for (i = 0; i < strlen(str); i++)
  {
    str[i] = toupper (str[i]);
  }
}


int main()
{
  char str[100];
  printf("Digite uma palavra: \n");
  scanf("%s", &str );(str);

  char p = maiuscula(str);

  printf("A palavra digitada foi: %s\n", str);
}
