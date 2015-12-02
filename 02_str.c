#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char primeira(char* str) {
  int i = 0;
  str[0] = toupper (str[0]);
  for (i = 1; i < strlen(str); i++)
  {
    str[i] = tolower (str[i]);
}
}


int main()
{
  char str[100];
  printf("Digite uma palavra: \n");
  scanf("%s", &str );(str);

  char p = primeira(str);

  printf("A palavra digitada foi: %s\n", str);
}
