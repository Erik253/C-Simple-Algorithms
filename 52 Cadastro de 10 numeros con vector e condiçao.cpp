#include<stdio.h>
#include<stdlib.h>
#define D 2

int vetor[D],cont;
main()
{
system("color f1");

 printf("\t\t Cadastre %d numeros!\n\n",D);
 printf("Obs: so seram exibidos numeros terminados em 0 maiores que 20!\n\n\n");

for(cont=0;cont<D;cont++)
 {
 printf("digite um valor: ");
 scanf("%d",&vetor[cont]);
 }//Key for

printf("\n\n\t\tOs numeros digitados foram: \n\n");

for(cont=0;cont<D;cont++)
 {
                                                  
 if(vetor[cont]%10==0 && vetor[cont]>20)
  
 printf("%0.2d\n\n",vetor[cont]);                        
  
 }//Key For


system("pause");      
}//Key main
