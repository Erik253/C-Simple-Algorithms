#include<stdio.h>
#include<stdlib.h>
main()
{
//Variaveis
float popa=15000,popb=10000;
int t=0;

//Color
system("color 79");

//Condiçao
while(popa>=popb)
{
popa=popa*1.0002; //popa*=1.0002
popb=popb*1.0003;  //popb*=1.0003
t++;
printf ("Tempo :%d\n\n",t);
system("pause");
}
}
