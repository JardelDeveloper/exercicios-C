// Leia um �ngulo em graus e apresente-o convertido em radianos. A f�rmula de convers�o �: R = G * PI / 180.
// Sendo G o �ngulo em graus e R em radianos e PI = 3.14.

#include <stdio.h>

void main()
{
	float PI = 3.14, r, g;
	
	printf ("Informe qual o angulo em graus e sera convertido em radianos: \n");
	scanf ("%f", &g);
	
	r = g * (PI / 180);
	printf ("%.2f radianos", r);	
}
