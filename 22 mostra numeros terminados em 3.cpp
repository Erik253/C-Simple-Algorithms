#include<stdio.h>
#include<stdlib.h>
#define n 3
main()
{
//VARIAVEIS
int k,a,q=0;

//INICIO
printf("\t\tInsira %d numeros!\n\n",n);

//REPETIÇÂO
for(k=1;k<=n;k++)
{
scanf("%d",&a);

if(a%10==3) //Se o resto de a for 3, entao.....
{
q++;
}     // Entao encremente +1
}     //FECHO o FOR
printf("Quantidade %d\n\n",q);
 
 //fim
system("pause");
}
