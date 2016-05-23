#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

main ()
{

//Variaveis
float fahre, celsius;

//Color
system ("color 74");

//beginning
printf ("\n digite temperatura de celsius:");
scanf ("%i", &celsius);

fahre = (9 * celsius + 160) / 5;
printf ("\n a temperatura fahre = %0.2f", fahre);

//end
system ("pause");
     }
     
     


