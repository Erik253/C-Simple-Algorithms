#include<stdio.h>
#include<stdlib.h>
#define R 3
void ler();
void exibir();
void somar();
int z[R];

main(){
system ("color 70");

ler();
exibir();
somar();
system("pause");

} // key main

void somar(){
int c=0,s=0;

 while(c<R)
 {
  s=s+z[c];
  c++;
 }// key while
  printf("Soma= %d \n\n",s);
      
}// key somar

void ler()
{
int cont;

printf("\t\tInsira  %d numeros!\n\n",R);     
for(cont=0;cont<R;cont++)
scanf("%d",&z[cont]);
     
}//key ler

void exibir()
{
 int contar=0;
 printf("Numeros pares digitados!\n\n");    
 while(contar<R)
 {
  if(z[contar]%2==0)     
    printf("%0.1d\n\n",z[contar]);
  contar=contar+1;
 }
}
