#include<stdio.h>
#include<stdlib.h>
main()
{
//int a,b,c;
int valor,antecessor,sucessor;

//Cor
system ("color 74");

//beginning
printf("Insira um valor : ");
scanf("%d",&valor);

//formula
antecessor = valor-1;
sucessor= valor+1;
printf("\n O antecessor de seu numero e = %d e o sucessor e %d \n", antecessor, sucessor);

//End
system ("pause");

}
