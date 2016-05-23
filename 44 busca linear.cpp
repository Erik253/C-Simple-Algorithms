#include<stdio.h>
#include<stdlib.h>
#define R 5
float v[R];
void leia();
void busca(float b);
main()
{
 float n;
 leia();
 printf("Valor desejado\n");
 scanf("%f",&n);
 busca(n);
 system("pause");
}

void busca(float b)
{
 int i,chave=0;
 for(i=0;i<R;i++)
  if(b==v[i])
  {  
   printf("Encontrei\n");
   chave=1;
   break;
  }
 if(chave==0)
  printf("Nao encontrei\n");
}

void leia()
{
 int i;
 for(i=0;i<R;i++)
 {
  printf("v[%d]=",i);
  scanf("%f",&v[i]);
 } 
}
