#include<stdio.h>
#include<stdlib.h>
#define R 3
void ler();
void exibir();
float z[R];

main(){
system ("color 70");

ler();
exibir();
system("pause");

} // key main

void ler(){
int cont;

printf("\t\tInsira um numero!\n\n");     
for(cont=0;cont<R;cont++)
scanf("%f",&z[cont]);
     
}//key ler

void exibir()
{
 int contar=0;
 printf("Lista de numeros digitados maiores que 10\n");    
 while(contar<R)
 {
  if(z[contar]>10)     
    printf("%0.1f\n",z[contar]);
  contar=contar+1;
 }
}
