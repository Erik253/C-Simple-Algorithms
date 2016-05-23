#include<stdio.h>
#include<stdlib.h>
main()
{
int i,cont=0,n;

printf("Insira um numero: ");
scanf("%d",&n);

//REPETIÇÂO
for(i=2;i<n;i++)
{

 if(n%i==0)    
 {cont=1;
 break;} 
}    

if(cont==1)
{printf("Nao e primo!\n\n");}      

else{printf("E primo!");} 
    
      

      
//END      
system("pause");      
}
