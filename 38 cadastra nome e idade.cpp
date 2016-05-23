#include<stdio.h>
#include<stdlib.h>
void leia();
void exiba(char n[], int idade);

//VAR GLOBAIS
char nome[40];
int i, a=1;

//ESPECIFICAÇAO....
void leia()
{
printf ("Nome: ");
gets(nome);
printf("Idade: ");
scanf("%d",&i);
}

void exiba(char n[], int idade)
{
printf("\n Cadastro %d Nome: %s \t idade: %d \n\n",n,idade,a);     
}

//INICIO
main()
{
system ("color 70");

leia();
exiba(nome,i);      
system("pause");      
}
