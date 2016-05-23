#include<stdio.h>
#include<stdlib.h>
float menor(float k,float e);


main()
{
system ("color 79");

float n1,n2,r;

printf("\t\tInsira dois numeros\n\n");
scanf ("%f%f",&n1,&n2);
r=menor(n1,n2);
printf("%0.0f \n\n",r);

system("pause"); 
}

float menor (float k,float e)
{
if(k<e)
return k;

else if(k>e)
return e;

else 
return 0;
}
