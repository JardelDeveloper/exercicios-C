// Leia uma dist�ncia em quil�metros e apresente-a convertida em milhas. A f�rmula de convers�o �: M = K / 1.61.
// Sendo K a dist�ncia em quil�metros e M em milhas.

#include <stdio.h>

void main()
{
	float m, k;
	
	printf ("Informe quantas quilometros sao para convertar em milhas: \n");
	scanf ("%f", &k);
	
	m = k / 1.61;
	printf ("%.2f milhas", m);		
}
