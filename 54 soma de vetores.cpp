#include<stdio.h>
#include<stdlib.h>
#define D 2

int i,um[D],dois[D];

main()
{
system("color f1");      
      
printf("\t\tRealize  a soma dos Vetores!!\n\nDigite os valores respectivamente:\n\n");

for(i=0;i<D;i++)
{
printf("Vetor1[%d]= ",i);
scanf("%d",&um[i]);      
}//Key for      
printf("\n");      

for(i=0;i<D;i++)
{
printf("Vetor2[%d]= ",i);      
scanf("%d",&dois[i]);
}// Key for      
      
printf("\nA soma dos vetores do mesmo indice: \n");      
for(i=0;i<D;i++)
{
printf("\nVetor 3[%d]= %d",i,um[i]+dois[i]);      
}//Key for      

printf("\n\n");      
      
system("pause");      
}//key main
