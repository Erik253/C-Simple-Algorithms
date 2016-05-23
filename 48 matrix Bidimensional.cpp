#include<stdio.h>
#include<stdlib.h>
#define q 2
int v[q][q],cont,conte;

main(){
system ("color 74");

printf("\t\tDigite %d numeros!\n\n",q*q);

for(cont=0;cont<q;cont++)
{
for(conte=0;conte<q;conte++){
scanf("%d",&v[cont][conte]);

}//Key 2ºfor       
}//Key 1ºfor       

for(cont=0;cont<q;cont++)
{
for(conte=0;conte<q;conte++)
{ 
if(v[cont][conte]%10==4||-4){
printf("\n-----------------------------------\n%d",v[cont][conte]);
printf("\n");

}//Key if       
}//2º For       
}//1º For

system("pause");
}//Key Main










