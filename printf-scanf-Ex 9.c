// Leia a temperatura em graus Celsius e apresente-a convertida em graus Kelvin.
// A fórmula de conversão é: K = C + 273.15, 
// Sendo K a temperatura em Kelvin e C a temperatura em Celsius.

#include <stdio.h>

void main()
{
	float c;
	
	printf ("Informe a temperatura em graus Celsius \n");
	scanf ("%f", &c);
	
	printf ("A temperatura em em Kelvin eh: %f", c + 273.15);
}
