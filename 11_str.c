#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cont = 0, b;
char valor[20],imprimir[200];

void unidade()
{
	switch(valor[b])
	{
		case '1':if(cont>=2)strcat(imprimir,"e");strcat(imprimir," um ");break;
    case '3':if(cont>=2)strcat(imprimir,"e");strcat(imprimir," tres ");break;
    case '2':if(cont>=2)strcat(imprimir,"e");strcat(imprimir," dois ");break;
    case '4':if(cont>=2)strcat(imprimir,"e");strcat(imprimir," quatro ");break;
    case '5':if(cont>=2)strcat(imprimir,"e");strcat(imprimir," cinco ");break;
    case '6':if(cont>=2)strcat(imprimir,"e");strcat(imprimir," seis ");break;
    case '7':if(cont>=2)strcat(imprimir,"e");strcat(imprimir," sete ");break;
    case '8':if(cont>=2)strcat(imprimir,"e");strcat(imprimir," oito ");break;
    case '9':if(cont>=2)strcat(imprimir,"e");strcat(imprimir," nove ");break;
  }
}

void dezenasTeens()
{
	if(valor[b]=='1')
	{
		switch(valor[b-1])
		{
	    case '0':b--;if(cont>=3)strcat(imprimir,"e");strcat(imprimir," dez ");break;
	    case '1':b--;if(cont>=3)strcat(imprimir,"e");strcat(imprimir," onze ");break;
	    case '2':b--;if(cont>=3)strcat(imprimir,"e");strcat(imprimir," doze ");break;
	    case '3':b--;if(cont>=3)strcat(imprimir,"e");strcat(imprimir," treze ");break;
	    case '4':b--;if(cont>=3)strcat(imprimir,"e");strcat(imprimir," quatorze ");break;
	    case '5':b--;if(cont>=3)strcat(imprimir,"e");strcat(imprimir," quinze ");break;
	    case '6':b--;if(cont>=3)strcat(imprimir,"e");strcat(imprimir," dezesseis ");break;
	    case '7':b--;if(cont>=3)strcat(imprimir,"e");strcat(imprimir," dezessete ");break;
	    case '8':b--;if(cont>=3)strcat(imprimir,"e");strcat(imprimir," dezoito ");break;
	    case '9':b--;if(cont>=3)strcat(imprimir,"e");strcat(imprimir," dezenove ");break;
		}
	}

	else
	{
  	switch(valor[b])
		{
	  	case '2':if(cont>=3)strcat(imprimir,"e");strcat(imprimir," vinte ");break;
      case '3':if(cont>=3)strcat(imprimir,"e");strcat(imprimir," trinta ");break;
      case '4':if(cont>=3)strcat(imprimir,"e");strcat(imprimir," quarenta ");break;
      case '5':if(cont>=3)strcat(imprimir,"e");strcat(imprimir," cinquenta ");break;
      case '6':if(cont>=3)strcat(imprimir,"e");strcat(imprimir," sessenta ");break;
      case '7':if(cont>=3)strcat(imprimir,"e");strcat(imprimir," setenta ");break;
      case '8':if(cont>=3)strcat(imprimir,"e");strcat(imprimir," oitenta ");break;
      case '9':if(cont>=3)strcat(imprimir,"e");strcat(imprimir," noventa ");break;
	 		}
    }
}

void centena()
{
	switch(valor[b])
	{
    case '1':if(valor[b-1]=='0'&&valor[b-2]=='0')strcat(imprimir," cem "); else strcat(imprimir," cento ");break;
    case '2':strcat(imprimir," duzentos ");break;
    case '3':strcat(imprimir," trezentos ");break;
    case '4':strcat(imprimir," quatrocentos ");break;
    case '5':strcat(imprimir," quinhentos ");break;
    case '6':strcat(imprimir," seiscentos ");break;
    case '7':strcat(imprimir," setecentos ");break;
    case '8':strcat(imprimir," oitocentos ");break;
    case '9':strcat(imprimir," novecentos ");break;
  }
}

void inverterNumToExtenso(char dados[20])
{
	char auxc;
	int ac, contc;
	contc=strlen(dados);
	int bc=contc;

	for (ac=0;ac<strlen(dados)/2;ac++)
	{
		bc--;
		auxc=valor[ac];
		valor[ac]=valor[bc];
		valor[bc]=auxc;
	}
}


void tamanhoPalavra()
{
	printf ("*****************");
	printf ("* Lendo Números *");
	printf ("*****************");
	printf ("Digite um valor entre 0 e 999: ");
	scanf ("%s", &valor);
	cont = strlen(valor);
	inverterNumToExtenso (valor);

	if(valor[0]=='0'&&cont<=1)
	{
		strcat(imprimir,"zero");
  }
}

int main()
{
	tamanhoPalavra();
	int a;
	for(b=cont; b>=0; b--)
	{
		switch (b)
		{
			case 0:unidade();break;
			case 1:dezenasTeens();break;
			case 2:centena();break;
		}
	}
	printf("\n\n\%s\n\n", imprimir);
	getchar();
}
