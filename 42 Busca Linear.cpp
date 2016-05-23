#include<stdio.h>
#include<stdlib.h>
#define r 7
void busca();
int a[r]={8,6,13,4,5,8,80}; //VECTOR GLOBAL
float b;

//ESPECIFICANDO
void busca(int b){
int i,chave=0;     
     
for(i=0;i<r;i++){

if(b==a[i])
{
printf("Encontrei!\n O numero %d esta armazenado no vetor A[%d] \n\n",a[i],i);
chave=1;
break;

}//key IF                 
}//key for     
     
if(chave==0)
printf("Nao encontrei!\n\n");

}//key busca

main(){
system ("color 74");
busca(80);
system("pause");       
}
