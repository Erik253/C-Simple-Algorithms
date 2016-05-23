#include<stdio.h>
#include<stdlib.h>
main()
{

//Variavel
int codigo;

//inicio
printf("Digite o codigo de seu produto\n");
scanf ("%d",&codigo);

//Escolha
switch (codigo)
{
case 10: printf("Caneta\n");
break;

case 11: printf("Lapis\n");
break;

case 16: printf("Borracha\n");
break;

case 20: printf("Caderno\n");
break;

default: printf("Codigo invalido!\n");
}

//end
system ("pause");
}
