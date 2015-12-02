#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void geranome(char* nome){

  char nomes[][5] = {"Ricardo\0","Maria\0","José\0", "Ana\0", "João\0"};
  char sobre[][5] = {"Pereira\0", "Da Silva\0","Dos Santos\0", "Ferreira\0", "da Costa\0"};

  int rs = rand()%5;
  int rs2 = rand()%5;
  while(rs2==rs)
    rs2 = rand()%5;

  char *sobre2 = sobre[rs2];
  char *sobre1 = sobre[rs];
  char *nm = nomes[rand()%5];

  sprintf(nome,"%10s %10s %10s\0",nm,sobre1,sobre2);

  // strcat(nome,sobre[rs]);
  // strcat(nome," ");
  // strcat(nome,sobre[rs2]);
}

int main()
{
  srand(time(NULL));
  char n[50];
  memset(n,' ',49);
  geranome(n);
  printf(n);
  return 0;
}
