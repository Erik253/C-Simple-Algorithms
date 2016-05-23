#include<stdio.h>
#include<stdlib.h>
#define D 2

int v[D],S,aux;

main()
{
system("color f1");
printf("\t\tInsira %d numeros\n\n",D);

for(S=0;S<D;S++)
{
 printf("\nDigite um numero: ");
 scanf("%d",&aux);

if(aux%2==0)
 {
v[S]=aux;            

 }//Key if
 
 else
{
printf("So e aceito numeros PARES! por favor insira outro numero!\n");
S--;
}//Else

}// chave for

printf("\n Os numero PARES digitados foram\n\n");

for(S=0;S<D;S++)
{
 
 printf("%d\n",v[S]);
}// key For

printf("\n\n");
system("pause");      
}//Key main
