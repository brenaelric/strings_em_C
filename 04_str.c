#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main ()
{
  char palavra [100];
  char caract [5];
  int cont = -1;
  int i = 0;
  printf ("Digite uma palavra: \n");
  gets (palavra);
  printf ("Digite um caractere: \n");
  gets (caract);
  for(i=0;i<=strlen(palavra);i++){
    if(caract[0] == palavra[i]){
        cont = i;
        printf ("O caractere %1s aparece no índice %d da palavra %s.\n", caract, cont, palavra);
        break;
    }
  }
  if(cont == -1)
    printf("-1\n");


  // if ( caract == palavra)
  // {
  //   palavra [100];
  // }
  // else
  // {
  //   printf ("-1");
  // }
}
