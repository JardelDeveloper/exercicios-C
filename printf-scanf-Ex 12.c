// Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de conversão é: K = 1.61 * M. 
// Sendo K a distância em quilômetros e M em milhas.

#include <stdio.h>

void main()
{
	float m, k;
	
	printf ("Informe quantas milhas sao para convertar em quilometros: \n");
	scanf ("%f", &m);
	
	k = 1.61 * m;
	printf ("%.2f quilometros", k);	
}
