// Leia a temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
// A fórmula de conversão é: C = 5.0 * (F - 32.0) / 9.0, 
// Sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.

#include <stdio.h>

void main()
{
	float f;
	
	printf ("Informe a temperatura em graus Fahrenheit \n");
	scanf ("%f", &f);
	
	printf ("A temperatura em em Celsius eh: %f", 5.0 * (f - 32.0) / 9.0);	
}
