// Leia a temperatura em graus Kevin e apresente-a convertida em graus Celsius.
// A fórmula de conversão é: C = K - 273.15, 
// Sendo C a temperatura em Celsius e K a temperatura em Kelvin.

#include <stdio.h>

void main()
{
	float k;
	
	printf ("Informe a temperatura em graus Kelvin \n");
	scanf ("%f", &k);
	
	printf ("A temperatura em em Celsius eh: %f", k - 273.15);
}
