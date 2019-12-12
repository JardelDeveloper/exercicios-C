// Leia a temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
// A fórmula de conversão é: F = C * (9.0 / 5.0) + 32.0, 
// Sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>

void main()
{
	float c;
	
	printf ("Informe a temperatura em graus Celsius \n");
	scanf ("%f", &c);
	
	printf ("A temperatura em em Fahrenheit eh: %f", (c * (9.0 / 5.0)) + 32);	
}
