// Leia uma dist�ncia em milhas e apresente-a convertida em quil�metros. A f�rmula de convers�o �: K = 1.61 * M. 
// Sendo K a dist�ncia em quil�metros e M em milhas.

#include <stdio.h>

void main()
{
	float m, k;
	
	printf ("Informe quantas milhas sao para convertar em quilometros: \n");
	scanf ("%f", &m);
	
	k = 1.61 * m;
	printf ("%.2f quilometros", k);	
}
