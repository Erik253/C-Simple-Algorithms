#include<stdio.h>
#include<stdlib.h>
#define Q 1

void cadastro();
void exibir();

struct livro
{
char autor[60];       
char titulo[100];
float preco;
};

struct livro vetor[Q]; 
int cont;

main(){
system("color f1");       
cadastro();       
exibir();       
system("pause");
}//key main

void cadastro()
{
printf("\t\t Realize o cadastro de seu livro\n\n");  


for(cont=0;cont<Q;cont++)
{
 
 printf("\n\nAutor: ");
 gets(vetor[cont].autor);    
 _flushall();
     
 printf("Titulo: ");
 gets(vetor[cont].titulo);
 
 printf("Preco: R$ ");
 scanf("%f",&vetor[cont].preco);
 _flushall(); 
 
}//key For 
}//Key Cadastro

void exibir()
{
  printf("\n\n\t\tSeu cadastro foi realizado con sucesso!\n\n");    

          for(cont=0;cont<Q;cont++)
 {
  printf("Autor: %s\n",vetor[cont].autor);
  printf("Titulo: %s\n",vetor[cont].titulo);
  printf("Preco: R$%0.2f\n\n",vetor[cont].preco); 
 }//Key For
}//key exibir
