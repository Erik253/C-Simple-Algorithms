#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

main ()
{

//Variaveis
int area, base, alt;
     
//cor
system ("color 74");

system ("cls");

//beginning
printf ("\n digite base:");
scanf ("%d", & base );

printf ("\n digite altura:");
scanf ("%i", &alt);

//formula
area = base * alt;
printf ("\n area = %d", area);

//fim
getch();
     }
     
