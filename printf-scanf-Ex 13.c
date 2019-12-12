// Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de conversão é: M = K / 1.61.
// Sendo K a distância em quilômetros e M em milhas.

#include <stdio.h>

void main()
{
	float m, k;
	
	printf ("Informe quantas quilometros sao para convertar em milhas: \n");
	scanf ("%f", &k);
	
	m = k / 1.61;
	printf ("%.2f milhas", m);		
}
